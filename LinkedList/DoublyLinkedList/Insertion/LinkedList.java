package LinkedList.DoublyLinkedList.Insertion;

import LinkedList.DoublyLinkedList.Node;

public class LinkedList {

    Node head;

    /* Add node at the front */
    void push(int data) {
        Node newNode = new Node(data);

        if (head == null) {

            // Change the head
            head = newNode;
            return;
        }

        // Link the next of the newNode to head
        newNode.next = head;

        // Link the prev of head to the newNdoe
        head.prev = newNode;

        // change the head on newNode
        head = newNode;

        return;

    }

    /* Add a node after a given node */
    void insertAfter(int data, int index) {

        if (head == null) {
            System.out.println("List is empty");
            return;
        }

        Node newNode = new Node(data);
        int i = 0;

        Node temp = head;

        while (i != index) {
            temp = temp.next;
            i++;
            if (temp.next == null) {
                System.out.println("Index doesn't exist");
                return;
            }
        }

        /*
         * Linked the next of the newNode to the next of temp
         */
        newNode.next = temp.next;

        /* Link the prev of temp to newNode */
        temp.prev = newNode;

        /* Link the nex of temp tp newNode */
        temp.next = newNode;

        /*
         * If next of newNode is not null then link the next prev of the newNode to
         * newNode
         */
        if (newNode.next != null) {
            newNode.next.prev = newNode;
        }
    }

    /* Insert at the end of the LinkedList */
    void insertEnd(int data) {
        Node newNode = new Node(data);

        /* if the head of the list is empty */
        if (head == null) {
            head = newNode;
            return;
        }

        Node temp = head;

        while (temp.next != null) {
            temp = temp.next;
        }

        /* Link the next of temp to newNode */
        temp.next = newNode;

        /* Link the prev of newNode to temp */
        newNode.prev = temp;

        return;
    }

    void displayForward() {
        if (head == null) {
            System.out.println("List is empty");
            return;
        }

        Node temp = head;

        while (temp != null) {
            System.out.print(temp.data);

            temp = temp.next;

            if (temp != null) {
                System.out.print(" -> ");
            }

        }
        System.out.println();

    }

    void displayBackward() {
        if (head == null) {
            System.out.println("List is empty");
            return;
        }

        Node last = head;

        while (last.next != null)
            last = last.next;

        Node first = last;

        while (first != null) {
            System.out.print(first.data);
            first = first.prev;

            if (first != null) {
                System.out.print(" -> ");
            }
        }

        System.out.println();

    }

    public static void main(String[] args) {
        LinkedList list = new LinkedList();
        list.push(1);
        list.push(2);
        list.push(3);
        list.push(4);
        list.push(5);
        list.push(6);
        list.push(7);
        list.push(8);
        list.push(9);
        list.push(10);
        list.insertAfter(11, 4);
        list.insertEnd(12);

        System.out.print("Forward: ");
        list.displayForward();

        System.out.print("Backward: ");
        list.displayBackward();
    }

}