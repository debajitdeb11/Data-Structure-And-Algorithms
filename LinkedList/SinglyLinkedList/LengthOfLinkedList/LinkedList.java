// Iterative Method

package LinkedList.SinglyLinkedList.LengthOfLinkedList;

public class LinkedList {

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

        // if the list is empty
        if (head == null) {
            head = new Node(data);
            return;
        }

        Node newNode = new Node(data);

        newNode.next = head;
        head = newNode;
        return;

    }

    Object length() {
        int length = 0;
        if (head == null) {
            System.out.println("List is Empty");
            return length;
        }

        Node temp = head;

        while (temp != null) {
            temp = temp.next;
            length++;
        }

        return length;

    }

    public static void main(String[] args) {

        LinkedList l1 = new LinkedList();
        LinkedList l2 = new LinkedList();

        System.out.println("Initial Length of List-1: " + l1.length());
        System.out.println("Initial Length of List-2: " + l2.length());

        l1.push(1);
        l1.push(2);
        l1.push(3);

        l2.push(1);
        l2.push(2);
        l2.push(3);
        l2.push(4);
        l2.push(5);
        l2.push(6);

        System.out.println("Length of List - 1: " + l1.length());
        System.out.println("Length of List - 2: " + l2.length());

    }

}