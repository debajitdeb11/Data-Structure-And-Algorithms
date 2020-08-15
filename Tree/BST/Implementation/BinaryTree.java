/* Implementation 1 */

package Tree.BST.Implementation;

public class BinaryTree {

    Node root;

    BinaryTree() {
        root = null;
    }

    void insert(int key) {
        root = insertRec(root, key);
    }

    /* Recursive function to insert a Node in BST */
    Node insertRec(Node root, int key) {

        /* if Tree is empty return a new Node */
        if (root == null) {
            root = new Node(key);
            return root;
        }

        if (key < root.key)
            root.left = insertRec(root.left, key);

        else if (key > root.key)
            root.right = insertRec(root.right, key);

        return root;
    }

    void search(int key) {

        Node temp = search(root, key);

        if (temp.key == key) {
            System.out.println("Key exist");
        } else {
            System.out.println("Key doesn't exist");
        }

    }

    /* Function to search a given key in BST */
    Node search(Node root, int key) {

        // Base Condition
        if (root == null || root.key == key)
            return root;

        /* if val is greater then root */
        if (key > root.key) {
            return search(root.right, key);
        } else {
            return search(root.left, key);
        }

    }

    void traversal() {
        inOrder(root);
        System.out.println();
    }

    /* Inorder Traversal */
    void inOrder(Node root) {
        if (root == null)
            return;

        inOrder(root.left);
        System.out.print(root.key + " ");
        inOrder(root.right);

    }

    public static void main(String[] args) {
        BinaryTree bTree = new BinaryTree();

        bTree.traversal();

        bTree.insert(1);
        bTree.insert(5);
        bTree.insert(10);
        bTree.insert(8);
        bTree.insert(7);
        bTree.insert(100);

        bTree.traversal();

        bTree.search(100);

    }

}