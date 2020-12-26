#include <iostream>
#include <queue>
using namespace std;

class Node
{
public:
    int key;
    Node *left;
    Node *right;

    Node(int key)
    {
        this->key = key;
        this->left = this->right = NULL;
    }
};

void print_level(Node *root)
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

int preIndex = 0;
Node *cTree(int in[], int pre[], int is, int ie)
{
    if (is > ie)
        return NULL;

    Node *root = new Node(pre[preIndex++]);

    int inIndex;
    for (int i = is; i <= ie; i++)
    {
        if (in[i] == root->key)
        {
            inIndex = i;
            break;
        }
    }

    root->left = cTree(in, pre, is, inIndex - 1);
    root->right = cTree(in, pre, inIndex + 1, ie);
    return root;
}

int main()
{

    // Node *parent = new Node(1);
    // Node *child1 = new Node(2);
    // Node *child2 = new Node(3);
    // parent->left = child1;
    // parent->right = child2;
    // print_level(parent);

    int in[] = {20, 10, 40, 30, 50};
    int pre[] = {10, 20, 30, 40, 50};

    int n = sizeof(in) / sizeof(in[0]);
    Node *root = cTree(in, pre, 0, n - 1);

    print_level(root);

    return 0;
}