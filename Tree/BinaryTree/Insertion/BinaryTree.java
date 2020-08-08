package Tree.BinaryTree.Insertion;

public class BinaryTree {

    Node root;

    BinaryTree() {
        root = null;
    }

    /* Inorder Traversal of Binary Tree */
    void inOrder(Node temp) {

        // Base Condition
        if (temp == null) {
            return;
        }

        inOrder(temp.left);
        System.out.print(temp.key + "\t");
        inOrder(temp.right);

    }

    void traversal() {
        Node temp = root;
        inOrder(temp);
        System.out.println();
    }

    /* To insert element in binary tree */
    void insert(int key) {
        java.util.Queue<Node> q = new java.util.LinkedList<Node>();
        Node temp = root;
        q.add(temp);

        while (!q.isEmpty()) {
            temp = q.peek();
            q.remove();

            if (temp.left == null) {
                temp.left = new Node(key);
                break;
            } else {
                q.add(temp.left);
            }

            if (temp.right == null) {
                temp.right = new Node(key);
                break;
            } else {
                q.add(temp.right);
            }

        }
    }

    public static void main(String[] args) {
        BinaryTree tree = new BinaryTree();
        // tree.root = new Node(1);

        // tree.root.left = new Node(2);
        // tree.root.right = new Node(3);

        // tree.root.left.left = new Node(4);
        // tree.root.left.right = new Node(5);

        // tree.root.right.left = new Node(6);

        tree.root = new Node(1);

        tree.root.left = new Node(2);
        tree.root.right = new Node(3);

        tree.traversal();

        // tree.insert(7);
        // tree.traversal();
    }

}