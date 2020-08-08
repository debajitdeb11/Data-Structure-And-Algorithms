package Tree.BinaryTree.Traversal.DFS;

import java.util.LinkedList;
import java.util.Queue;

public class Tree {

    Node root;

    Tree() {
        root = null;
    }

    Tree(int key) {
        root = new Node(key);
    }

    void printLevelOrder() {

        if (root == null) {
            System.out.println("Tree is empty");
            return;
        }

        Queue<Node> q = new LinkedList<>();

        q.add(root);

        while (!q.isEmpty()) {
            Node temp = q.poll();
            System.out.print(temp.key + " ");

            if (temp.left != null) {
                q.add(temp.left);
            }

            if (temp.right != null) {
                q.add(temp.right);
            }

        }
        return;
    }

    public static void main(String[] args) {
        Tree tree = new Tree(1);

        tree.root.left = new Node(2);
        tree.root.right = new Node(3);

        tree.root.left.left = new Node(4);
        tree.root.left.right = new Node(5);

        System.out.println("Elements of Tree:");
        tree.printLevelOrder();
        System.out.println();

        Tree tree2 = new Tree();
        System.out.println("Elements of Tree2:");
        tree2.printLevelOrder();

    }

}