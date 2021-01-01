#include <iostream>
#include <vector>
using namespace std;

struct Node
{
    int key;
    Node *left;
    Node *right;

    Node(int key)
    {
        this->key = key;
        this->left = this->right = NULL;
    }
};

void traversal(Node *root)
{
    if (root == NULL)
        return;

    cout << root->key << " ";
    traversal(root->left);
    traversal(root->right);
}

bool findPath(Node *root, vector<Node *> &p, int n)
{
    if (root == NULL)
        return false;

    p.push_back(root);

    if (root->key == n)
        return true;

    if (findPath(root->left, p, n) || findPath(root->right, p, n))
    {
        return true;
    }

    p.pop_back();
    return false;
}

Node *LCA(Node *root, int n1, int n2)
{
    vector<Node *> p1;
    vector<Node *> p2;

    if (!findPath(root, p1, n1) || !findPath(root, p2, n2))
        return NULL;

    for (int i = 0; i < p1.size() - 1 && i < p2.size() - 1; i++)
    {
        if (p1[i + 1] != p2[i + 1])
            return p1[i];
    }

    return NULL;
}

int main()
{

    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->right->left = new Node(40);
    root->right->right = new Node(50);

    traversal(root);

    Node *res = LCA(root, 20, 50);

    cout << "LCA = " << res->key << "\n";

    return 0;
}