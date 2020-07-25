package LinkedList.CircularLinkedList.Traversal;

public class LinkedList {

    // static Node head;

    static class Node {
        int data;
        Node next;

        Node(int data) {
            this.data = data;
        }
    }

    static void printList(Node head) {

        if (head == null) {
            System.out.println("Circular Linkedlist is Empty");
            return;
        }

        Node temp = head;

        do {

            System.out.print(temp.data);
            temp = temp.next;
            if (temp != head) {
                System.out.print(" -> ");
            }

        } while (temp != head);
        System.out.println();
    }

    public static void main(String[] args) {

        Node head = new Node(1);
        Node second = new Node(2);
        Node third = new Node(3);
        Node forth = new Node(4);
        Node fifth = new Node(5);

        // Linked one node to the next node
        head.next = second;
        second.next = third;
        third.next = forth;
        forth.next = fifth;
        fifth.next = head;

        /* To print the elements of the LinkedList */
        LinkedList.printList(head);
    }

}