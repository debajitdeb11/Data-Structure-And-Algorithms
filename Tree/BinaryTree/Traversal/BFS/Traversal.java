package Tree.BinaryTree.Traversal.BFS;

public class Traversal {

    static class Node {
        int key;
        Node left;
        Node right;

        Node(int key) {
            this.key = key;
            this.left = this.right = null;
        }
    }

    static class BinaryTree {
        Node root;

        BinaryTree() {
            root = null;
        }

        BinaryTree(int key) {
            root = new Node(key);
        }

        // Pre-Order traversal follows:
        // (ROOT-LEFT-RIGHT)
        void preOrderTraversal(Node temp) {
            if (temp == null)
                return;

            System.out.print(temp.key + " ");
            preOrderTraversal(temp.left);
            preOrderTraversal(temp.right);
        }

        // In-Order Traversal follows:
        // (LEFT-ROOT-RIGHT)
        void inOrderTraversal(Node temp) {
            if (temp == null)
                return;

            inOrderTraversal(temp.left);
            System.out.print(temp.key + " ");
            inOrderTraversal(temp.right);
        }

        // Post-Order Traversal follows:
        // (LEFT-RIGHT-ROOT)
        void postOrderTraversal(Node temp) {
            if (temp == null)
                return;

            postOrderTraversal(temp.left);
            postOrderTraversal(temp.right);
            System.out.print(temp.key + " ");
        }

        public static void main(String[] args) {
            BinaryTree tree = new BinaryTree(1);

            tree.root.left = new Node(2);
            tree.root.right = new Node(3);

            tree.root.left.left = new Node(4);
            tree.root.left.right = new Node(5);

            System.out.println("Pre-Order Traversal: ");
            tree.preOrderTraversal(tree.root);
            System.out.println("\n");

            System.out.println("In-Order Traversal: ");
            tree.inOrderTraversal(tree.root);
            System.out.println("\n");

            System.out.println("Post-Order Traversal: ");
            tree.postOrderTraversal(tree.root);
            System.out.println("\n");

        }

    }

}