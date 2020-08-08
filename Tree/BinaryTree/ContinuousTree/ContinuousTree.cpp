/*

** Continuous Tree **

A tree is Continuous tree if in each root to leaf path,
absolute difference between keys of two adjacent is 1.
We are given a binary tree, we need to check if tree is continuous or not.

*/

#include <iostream>
#include <cmath>
using namespace std;

struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node* newNode(int data) {
    struct Node* new_node = new Node();
    new_node->data = data;
    new_node->left = new_node->right = NULL;
    return new_node;
}

// Function to Check if the Tree is Continuous or not
bool isContinious(struct Node* node) {

    // if the next node is empty then return
    if (node == NULL)
        return true;

    // if the current node is the leaf node then
    // return true because it is end of root
    // to leaf path
    if (node->left == NULL && node->right == NULL)
        return true;

    // if the left subtree is empty
    if (node->left == NULL)
        return abs(node->data - node->right->data) == 1 && isContinious(node->right);

    // if the right subtree is empty
    if (node->right = NULL)
        return abs(node->data - node->left->data) == 1 && isContinious(node->left);


    // If both the left & right sub tree are not empty then,
    // check the both left & right
    return abs(node->data - node->right->data) == 1 &&
        abs(node->data - node->left->data) == 1 &&
        isContinious(node->left) &&
        isContinious(node->right);

}

int main() {

    struct Node* root = newNode(3);
    root->left = newNode(2);
    root->right = newNode(4);

    isContinious(root) ? cout << "True\n" : cout << "False\n";

    return 0;
}
