// TODO: This code is buggy

package LinkedList.SinglyLinkedList.RemoveDuplicate.UnsortedList;

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

    void displayList() {
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
        System.err.println();

    }

    void removeDuplicate() {

        Node current = head;
        Node temp;

        while (current != null && current.next != null) {

            temp = current;

            while (temp.next != null) {

                if (temp.data == temp.next.data) {
                    temp.next = temp.next.next;
                } else {
                    temp = temp.next;
                }
            }

            current = current.next;

        }

    }

    public static void main(String[] args) {
        LinkedList list = new LinkedList();

        list.append(2);
        list.append(1);
        list.append(2);
        list.append(2);
        list.append(2);
        list.append(5);
        list.append(5);
        list.append(5);
        list.append(5);

        list.displayList();

        list.removeDuplicate();

        list.displayList();
    }

}