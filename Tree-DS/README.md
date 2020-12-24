# Tree Data Structure

### Implementation of Tree DS in C++

```
class Node {

    public:
        int data;
        Node* left;
        Node* right;

        Node(int data) {
            this->data = data;
            this->left = NULL;
            this->right = NULL;
        }
};

```

## Traversal in Tree

### Depth First Traversal

**Inorder Traversal**

```
void inorder_traversal(Node* root) {

    if (root != NULL) {
        inorder_traversal(root->left);
        cout << root->data << " ";
        inorder_traversal(root->right);
    }
}

```

**Preorder Traversal**

```
void preorder_traversal(Node* root) {

    if (root != NULL) {
        cout << root->data << " ";
        preorder_traversal(root->left);
        preorder_traversal(root->right);
    }
}
```

**Postorder Traversal**

```

void postorder_traversal(Node* root) {

    if (root != NULL) {
        postorder_traversal(root->left);
        postorder_traversal(root->right);
        cout << root->data << " ";
    }
}
```

### Breadth First Traversal (Level Order Traversal)

```
void level_order_traversal(Node* root) {

    if (root == NULL) return;

    queue<Node*> q;

    q.push(root);

    while(!q.empty()) {
        Node* cur_node = q.front();
        q.pop();

        cout << cur_node->data << " ";

        if (cur_node->left != NULL)
            q.push(cur_node->left);
        
        if (cur_node->right != NULL)
            q.push(cur_node->right);

    }

}
```

## Height of BT

```
/***** Height of Binary Tree *****/
int height(Node* root) {

    if (root == NULL)
        return 0;
    else
        return max(height(root->left), height(root->right)) + 1;

}
```

## Print k-th node

```
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
```