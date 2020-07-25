package LinkedList.CircularLinkedList.Insertion;

import LinkedList.CircularLinkedList.Node;

public class LinkedList {

    Node head;

    void push(int data) {

        Node newNode = new Node(data);

        if (head == null) {
            head = newNode;
            newNode.next = head;
            return;
        }

        Node temp = head;

        while (temp.next != head) {
            temp = temp.next;
        }

        newNode.next = head;
        head = newNode;
        temp.next = head;
        return;

    }

    void print() {
        if (head == null) {
            System.out.println("List is empty!");
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
        LinkedList list = new LinkedList();
        list.print();

        LinkedList list2 = new LinkedList();
        list2.push(1);
        list2.push(2);
        list2.push(3);
        list2.push(4);
        list2.push(5);

        list2.print();
    }

}