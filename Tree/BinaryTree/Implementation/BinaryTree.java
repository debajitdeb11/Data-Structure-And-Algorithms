package Tree.BinaryTree.Implementation;

public class BinaryTree {

    // Root of Binary Tree
    Node root;

    // Parameterized Constructor
    BinaryTree(int key) {
        root = new Node(key);
    }

    // Default Constructor
    BinaryTree() {
        root = null;
    }

    /** Code incomplete **/

    // void display() {
    // Node temp = root;

    // System.out.println("\t" + temp.data);

    // Node lTemp = root.left;
    // Node rTemp = root.right;

    // while (lTemp != null || rTemp != null) {
    // System.out.println(lTemp.data + "\t\t" + rTemp.data);
    // lTemp = lTemp.left;
    // rTemp = rTemp.right;
    // }

    // }

    public static void main(String[] args) {
        BinaryTree tree = new BinaryTree();
        tree.root = new Node(1);

        tree.root.left = new Node(2);
        tree.root.right = new Node(3);

        tree.root.left.left = new Node(4);
        tree.root.left.right = new Node(5);

        tree.root.right.left = new Node(6);
        tree.root.right.right = new Node(7);

        // tree.display();

    }

}