/* Implementation of Tree Data Structure */
#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

class Node
{

public:
    int data;
    Node *left;
    Node *right;

    Node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

/***** Traversal *****/

/**
 * @brief Inorder Tree Traversal
 * 
 * @param root Place a root node here
 */
void inorder_traversal(Node *root)
{

    if (root != NULL)
    {
        inorder_traversal(root->left);
        cout << root->data << " ";
        inorder_traversal(root->right);
    }
}

void preorder_traversal(Node *root)
{

    if (root != NULL)
    {
        cout << root->data << " ";
        preorder_traversal(root->left);
        preorder_traversal(root->right);
    }
}

void postorder_traversal(Node *root)
{

    if (root != NULL)
    {
        postorder_traversal(root->left);
        postorder_traversal(root->right);
        cout << root->data << " ";
    }
}

void level_order_traversal(Node *root)
{

    if (root == NULL)
        return;

    queue<Node *> q;

    q.push(root);

    while (!q.empty())
    {
        Node *cur_node = q.front();
        q.pop();

        cout << cur_node->data << " ";

        if (cur_node->left != NULL)
            q.push(cur_node->left);

        if (cur_node->right != NULL)
            q.push(cur_node->right);
    }
}

/**
 * @brief Level Order Traversal Line by Line
 * Method - I
 * 
 * @param root 
 */
void level_order_traversal_ll(Node *root)
{
    if (root == NULL)
        return;

    queue<Node *> q;

    // push the root node
    q.push(root);
    // as the root node doesn't have sibling nodes
    q.push(NULL);

    while (q.size() > 1)
    {
        Node *curr = q.front();
        q.pop();

        if (curr == NULL)
        {
            cout << "\n";
            q.push(NULL);
            continue;
        }

        cout << curr->data << " ";

        if (curr->left != NULL)
            q.push(curr->left);

        if (curr->right != NULL)
            q.push(curr->right);
    }
}

/**
 * @brief Level Order Traversal Method - II
 * 
 * @param root
 */
void level_order_traversal_ll2(Node *root)
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

            cout << curr->data << " ";

            if (curr->left != NULL)
                q.push(curr->left);

            if (curr->right != NULL)
                q.push(curr->right);
        }

        cout << "\n";
    }
}

/***** Height of Binary Tree *****/
int height(Node *root)
{

    if (root == NULL)
        return 0;
    else
        return max(height(root->left), height(root->right)) + 1;
}

/***** Print Node at k-th distance *****/
void node_kth(Node *root, int k)
{

    if (root == NULL)
        return;
    if (k == 0)
    {
        cout << root->data << " ";
    }
    else
    {
        node_kth(root->left, k - 1);
        node_kth(root->right, k - 1);
    }
}

/**
 * @brief Get the size of the Tree
 * Time Complexity: O(n)
 * Space Complexity: O(n)
 * 
 * @param root 
 * @return int 
 */
int get_size(Node *root)
{
    if (root == NULL)
        return 0;

    return 1 + get_size(root->left) + get_size(root->right);
}

/**
 * @brief Maximum in the Binary Tree
 * @author Debajit Deb
 * @param root 
 * @return The Maximum value in the binary Tree
 */
int max_value(Node *root)
{
    if (root == NULL)
        return INT16_MIN;

    return max(root->data, max(max_value(root->left), max_value(root->right)));
}

/**
 * @brief Check is Sum of children nodes is equals to the parent node
 * 
 * @param root 
 * @return true If the Sum of the children nodes is equal to parent node 
 * @return false Otherwise
 */
bool children_sum_property(Node *root)
{
    if (root == NULL)
        return true;

    if (root->left == NULL && root->right == NULL)
        return true;

    int sum = 0;
    if (root->left != NULL)
    {
        sum += root->left->data;
    }

    if (root->right != NULL)
    {
        sum += root->right->data;
    }

    return (root->data == sum && children_sum_property(root->left) && children_sum_property(root->right));
}

int main()
{

    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->left->right = new Node(50);

    Node *parent = new Node(3);
    parent->left = new Node(1);
    parent->right = new Node(2);
    parent->right->right = new Node(1);
    parent->right->left = new Node(2);

    inorder_traversal(root);
    cout << "\n";
    preorder_traversal(root);
    cout << "\n";
    postorder_traversal(root);
    cout << "\n";
    level_order_traversal(root);
    cout << "\n";
    level_order_traversal_ll(root);
    cout << "\n";
    level_order_traversal_ll2(root);
    cout << "\n";

    cout << height(root) << "\n";

    node_kth(root, 1);
    cout << "\n";

    cout << "Size of the Binary Tree = " << get_size(root) << "\n";

    cout << "Maximum in Binary Tree = " << max_value(root) << "\n";

    cout << "Is children Sum = " << children_sum_property(parent) << "\n";

    return 0;
}