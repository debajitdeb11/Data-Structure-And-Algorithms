package LinkedList.SinglyLinkedList.LoopDetection.UsingFloydCycle;

import LinkedList.SinglyLinkedList.Node;

public class LinkedList {

    Node head;

    void append(int data) {

        if (head == null) {
            head = new Node(data);
            return;
        }

        Node temp = head;

        while (temp.next != null) {
            temp = temp.next;
        }

        temp.next = new Node(data);
        return;

    }

    // Detect Loop
    boolean detectLoop() {

        if (head == null) {
            System.out.println("LinkedList is Empty");
            return false;
        }

        Node fastPtr = head;
        Node slowPtr = head;

        while (slowPtr != null && fastPtr != null && fastPtr.next != null) {

            // Move the fastPtr by two Nodes
            fastPtr = fastPtr.next.next;

            // Move the slowPtr by one Node
            slowPtr = slowPtr.next;

            // If the fastPtr && slowPtr pointing
            // the same Node return true
            if (fastPtr == slowPtr) {
                System.out.println("Loop Detected!");
                return true;
            }
        }

        // Else return false
        System.out.println("No Loop Detected!");
        return false;

    }

    public static void main(String[] args) {
        LinkedList list = new LinkedList();

        list.append(1);
        list.append(2);
        list.append(3);
        list.append(4);
        list.append(5);

        list.head.next.next.next = list.head;

        list.detectLoop();

        LinkedList list2 = new LinkedList();
        list2.append(1);
        list2.append(2);
        list2.append(3);
        list2.append(4);
        list2.append(5);

        list2.detectLoop();

    }

}