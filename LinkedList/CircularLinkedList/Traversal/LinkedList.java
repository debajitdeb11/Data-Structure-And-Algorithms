package LinkedList.CircularLinkedList.Traversal;

public class LinkedList {

    Node head;

    class Node {
        int data;
        Node next;

        Node(int data) {
            this.data = data;
        }

        /*
         * Function to insert node at the beginning of the Circular LinkedList
         */
        void push(int data) {

            Node newNode = new Node(data);

            if (head == null) {
                head = newNode;
                newNode.next = head;
                return;
            }

            Node temp = head;

            while (temp.next != null) {

            }

        }

    }
}