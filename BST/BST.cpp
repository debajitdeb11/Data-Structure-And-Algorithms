#include <iostream>
#include <queue>
using namespace std;

struct Node
{
    int key;
    Node *left;
    Node *right;

    Node(int key)
    {
        this->key = key;
        this->right = this->left = NULL;
    }
};

void traversalLL(Node *root)
{
    if (root == NULL)
        return;

    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        int s = q.size();

        for (int i = 0; i < s; i++)
        {
            Node *curr = q.front();
            q.pop();

            cout << curr->key << " ";

            if (curr->left != NULL)
                q.push(curr->left);

            if (curr->right != NULL)
                q.push(curr->right);
        }
        cout << "\n";
    }
}

/**
 * @brief Recurcive solution to search an item in BST, Time Complexity: O(height of BST)
 * Space Complexity: O(height of BST)
 * Aux Space: O(1)
 * @param root 
 * @param n, Key to be find in the BST
 * @return true, If the key is found
 */
bool search_rec(Node *root, int n)
{
    if (root == NULL)
        return false;

    else if (n == root->key)
        return true;

    else if (n > root->key)
        return search_rec(root->right, n);

    else
        return search_rec(root->left, n);
}

/**
 * @brief Iterative solution to search an item in BST, Time Complexity: O(height of BST)
 * Space Complexity: O(1)
 * Aux Space: O(1)
 * @param root 
 * @param n, Key to be find in the BST
 * @return true, If the key is found
 */
bool search_iterative(Node *root, int n)
{
    while (root != NULL)
    {
        if (root->key == n)
            return true;
        else if (n > root->key)
            root = root->right;
        else
            root = root->left;
    }
    return false;
}

/**
 * @brief Recursive Insertion into BST
 * 
 * @param root 
 * @param x 
 * @return Node* 
 */
Node *insert_rec(Node *root, int x)
{
    // Corner case: When the BST is null
    if (root == NULL)
    {
        return new Node(x);
        // return true;
    }
    else if (x > root->key)
    {
        root->right = insert_rec(root->right, x);
    }
    else
    {
        root->left = insert_rec(root->left, x);
    }
    return root;
}

/**
* @brief Iterative Insertion into BST
* @param root
* @param x Value you want to insert
* @return Node*
*/
Node *insert_iterative(Node *root, int x)
{
    Node *temp = new Node(x);
    Node *parent = NULL;
    Node *curr = root;

    while (curr != NULL)
    {
        parent = curr;

        if (x > curr->key)
            curr = curr->right;
        else if (x < curr->key)
            curr = curr->left;
        else
            return root;
    }

    if (parent == NULL)
        return temp;

    if (x > parent->key)
        parent->right = temp;
    else
        parent->left = temp;

    return root;
}

/**
 * @brief Get the Successor object
 * 
 * @param curr 
 * @return Node* 
 */
Node *getSuccessor(Node *curr)
{
    curr = curr->right;
    while (curr != NULL && curr->left != NULL)
    {
        curr = curr->left;
    }
    return curr;
}

/**
* @brief Delete a node from the BST
* @param root
* @param x Value you want to delete
* @return Node*
*/
Node *deleteNode(Node *root, int x)
{
    if (root == NULL)
        return root;

    if (root->key > x)
    {
        root->left = deleteNode(root->left, x);
    }
    else if (root->key < x)
    {
        root->right = deleteNode(root->right, x);
    }
    else
    {
        if (root->left == NULL)
        {
            Node *temp = root->right;
            delete (root);
            return temp;
        }
        else if (root->right == NULL)
        {
            Node *temp = root->left;
            delete (root);
            return temp;
        }
        else
        {
            Node *succ = getSuccessor(root);
            root->key = succ->key;
            root->right = deleteNode(root->right, succ->key);
        }
    }
    return root;
}

/**
 * @brief To get the minimum closes Node of the given root
 * 
 * @param root 
 * @param x 
 * @return Node* 
 */
Node *getFloor(Node *root, int x)
{
    Node *res = NULL;
    while (root != NULL)
    {
        if (root->key == x)
        {
            return root;
        }
        else if (x < root->key)
        {
            root = root->left;
        }
        else
        {
            res = root;
            root = root->right;
        }
    }
    return res;
}

/**
 * @brief Get the Ceil object
 * 
 * @param root 
 * @param x 
 * @return Node* 
 */
Node *getCeil(Node *root, int x)
{
    Node *res = NULL;

    while (root != NULL)
    {
        if (root->key == x)
            return root;

        else if (root->key < x)
        {
            root = root->right;
        }

        else
        {
            res = root;
            root = root->left;
        }
    }
    return res;
}

int main()
{

    Node *root = new Node(15);
    root->left = new Node(5);
    root->left->left = new Node(3);
    root->right = new Node(20);
    root->right->right = new Node(80);
    root->right->left = new Node(18);
    root->right->left->left = new Node(16);

    traversalLL(root);

    // cout << search_rec(root, 16) << "\n";
    // cout << search_iterative(root, 16) << "\n";

    root = insert_rec(root, 15);

    traversalLL(root);

    return 0;
}