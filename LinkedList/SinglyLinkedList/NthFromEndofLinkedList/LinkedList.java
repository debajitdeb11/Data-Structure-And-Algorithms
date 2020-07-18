
// Nth Node from the end of the LinkedList

package LinkedList.SinglyLinkedList.NthFromEndofLinkedList;

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

    void push(int data) {

        if (head == null) {
            head = new Node(data);
            return;
        }

        Node newNode = new Node(data);

        newNode.next = head;
        head = newNode;
        return;

    }

    void printNthFromLast(int index) {

        int length = 0;

        if (head == null) {
            System.out.println("List is empty");
            return;
        }

        // Find the length of the LinkedList
        Node temp = head;

        while (temp != null) {
            length++;
            temp = temp.next;
        }

        if (index > length) {
            System.out.println("Index: " + index + " doesn't exist");
            return;
        }

        temp = head;

        for (int i = 0; i < length - index; i++) {
            temp = temp.next;
        }

        System.out.println("Value of index: " + index + " from the end of the list is: " + temp.data);
        return;

    }

    void print() {
        Node temp = head;

        if (head == null) {
            System.out.println("List is Empty");
            return;
        }

        while (temp != null) {

            System.out.print(temp.data + " ");

            temp = temp.next;
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

        list.print();

        list.printNthFromLast(1);

    }

}