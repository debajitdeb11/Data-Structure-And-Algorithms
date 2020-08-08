/* Deletion in Binary Tree */

package Tree.BinaryTree.Deletion;

import java.util.LinkedList;
import java.util.Queue;

public class BTree {

    Node root;

    BTree() {
        root = null;
    }

    BTree(int key) {
        root = new Node(key);
    }

    void inOrder(Node temp) {
        if (temp == null)
            return;

        inOrder(temp.left);
        System.out.print(temp.data + " ");
        inOrder(temp.right);

    }

    void traversal() {
        Node temp = root;
        inOrder(temp);
        System.out.println();

    }

    /*
     * Function to delete the given deepest node (d_node) in binary tree
     */
    boolean deleteDeepestNode(Node d_node) {
        if (root == null) {
            System.out.println("Tree is empty");
            return false;
        }

        // Do level order traversal untill
        // we find the last node
        Queue<Node> q = new LinkedList<>();
        Node temp = root;
        q.add(temp);

        while (!q.isEmpty()) {
            temp = q.peek();
            q.remove();

            // If the current Node is the deeepest Node
            // then make the current node equals to null
            if (temp != d_node) {
                temp = null;
                return true;
            }

            if (temp.right != null) {
                if (temp.right == d_node) {
                    temp.right = null;
                    return true;
                } else {
                    q.add(temp.right);
                }
            }

            if (temp.left != null) {
                if (temp.left == d_node) {
                    temp.left = null;
                    return true;
                } else {
                    q.add(temp.left);
                }
            }

        }
        return true;
    }

    /* function to delete element in binary tree */
    Node deletion(int key) {

        // If the root of the node is null
        if (root == null) {
            return null;
        }

        Node current = root;

        if (current.left == null && current.right == null) {
            if (current.data == key) {
                return null;
            } else {
                return root;
            }
        }

        Queue<Node> q = new LinkedList<>();
        current = root;
        q.add(current);

        Node key_node = null;

        // Do level order traversal to find deepest
        // node(temp) and node to be deleted (key_node)

        while (!q.isEmpty()) {
            current = q.peek();
            q.remove();

            if (current.data == key) {
                key_node = current;
            }

            if (current.left != null) {
                q.add(current.left);
            }

            if (current.right != null) {
                q.add(current.right);
            }
        }

        if (key_node != null) {
            int x = current.data;
            deleteDeepestNode(current);
            key_node.data = x;
        }

        return root;
    }

    public static void main(String[] args) {
        BTree tree = new BTree(1);

        tree.root.left = new Node(2);
        tree.root.right = new Node(3);

        tree.root.right.right = new Node(4);

        tree.traversal();

        tree.root = tree.deletion(4);

        tree.traversal();

    }

}