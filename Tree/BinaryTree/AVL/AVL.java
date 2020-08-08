
//TODO: Program Pending
//AVL with duplicate keys
package Tree.BinaryTree.AVL;

class AVLTree {

    static class Node {
        int key;
        Node left;
        Node right;
        int height;
        int count;

        Node(int key) {
            this.key = key;
            this.left = this.right = null;
        }

    }

    // To get the height of the tree
    static int height(Node N) {
        if (N == null)
            return 0;

        return N.height;
    }

    // A utility function to get maximum of two integer
    static int max(int a, int b) {
        return (a > b) ? a : b;
    }

    // Helper function that allocates a new Node with the given
    // key and null left and right pointer
    static Node newNode(int key) {
        Node node = newNode(key);
        node.height = 1; // new node is initally added to leaf
        node.count = 1;

        return node;
    }

    // A utility function to right rotate
    // subtree rooted with y
    static Node rightRotate(Node y) {
        Node x = y.left;
        Node T2 = x.right;

        // Perform rotation
        x.right = y;
        y.left = T2;

        // Update heights
        x.height = max(height(x.left), height(x.right)) + 1;
        y.height = max(height(y.left), height(y.right)) + 1;

        return y;
    }

    static Node 

}