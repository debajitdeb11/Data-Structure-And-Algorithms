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

const int EMPTY = -1;

void serialize(Node *root, vector<int> &v)
{
    if (root == NULL)
    {
        v.push_back(EMPTY);
        return;
    }

    v.push_back(root->key);
    serialize(root->left, v);
    serialize(root->right, v);
}

Node *deserialize(vector<int> &v)
{
    static int index = 0;

    if (index == v.size())
        return NULL;

    int val = v[index++];

    if (val == EMPTY)
        return NULL;

    Node *root = new Node(val);
    root->left = deserialize(v);
    root->right = deserialize(v);

    return root;
}

int main()
{

    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);

    vector<int> serializeData;

    serialize(root, serializeData);

    for (auto &&i : serializeData)
    {
        cout << i << " ";
    }

    Node *parent = deserialize(serializeData);

    return 0;
}
