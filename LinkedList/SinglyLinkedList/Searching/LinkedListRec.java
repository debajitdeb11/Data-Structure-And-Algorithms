// Search an element in LinkedList 
// using Recursion

package LinkedList.SinglyLinkedList.Searching;

public class LinkedListRec {

    private Node head;

    class Node {
        int data;
        Node next;

        Node(int data) {
            this.data = data;
            this.next = null;
        }
    }

    void push(int data) {

        // if List is empty
        if (head == null) {
            head = new Node(data);
            return;
        }

        Node newNode = new Node(data);

        newNode.next = head;
        head = newNode;
        return;
    }

    boolean search(Node node, int key) {

        if (node == null) {
            return false;
        }

        if (node.data == key) {
            return true;
        }

        return search(node.next, key);
    }

    void find(int key) {

        Node temp = head;

        if (search(temp, key)) {
            System.out.println("Key Found!");
        } else {
            System.out.println("Key doesn't exist");
        }
    }

    public static void main(String[] args) {
        LinkedList list = new LinkedList();

        list.push(1);
        list.push(2);
        list.push(3);
        list.push(4);
        list.push(5);

        list.find(0);

        list.find(4);

    }

}