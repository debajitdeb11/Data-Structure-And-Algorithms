package LinkedList.Insertion;

public class LinkedList {

    Node head;

    class Node {
        int data;
        Node next;

        Node(int data) {
            this.data = data;
            this.next = null;
        }
    }

    // Insertion of node at the front of the list
    private void push(int data) {

        Node newNode = new Node(data);

        if (head == null) {
            head = newNode;
            return;
        }

        newNode.next = head;
        head = newNode;

        return;

    }

    // Insertion after the given previous Node
    private void pushMiddle(Node prev, int data) {

        Node newNode = new Node(data);

        if (prev == null) {
            System.out.println("Error: Previous Node is null!!!!");
            return;
        }

        newNode.next = prev.next;
        prev.next = newNode;
        return;
    }

    // Insertion at the end of the list
    private void append(int data) {

        Node newNode = new Node(data);

        if (head == null) {
            head = newNode;
            return;
        }

        Node temp = head;

        while (temp.next != null) {
            temp = temp.next;
        }

        temp.next = newNode;
        return;
    }

    private void displayList() {

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

    public static void main(String[] args) {

        LinkedList llist = new LinkedList();

        llist.push(1);

        llist.pushMiddle(llist.head, 2);

        llist.append(3);

        llist.pushMiddle(llist.head.next.next.next, 10);

        llist.displayList();

    }

}