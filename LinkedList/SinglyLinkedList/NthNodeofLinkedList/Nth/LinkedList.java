/*

Find the Nth Node of the LinkedList
using the methoed of  Iteration

*/

package LinkedList.SinglyLinkedList.NthNodeofLinkedList.Nth;

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

        if (head == null) {
            head = new Node(data);
            return;
        }

        Node newNode = new Node(data);
        newNode.next = head;
        head = newNode;
        return;
    }

    void getNthNode(int index) {
        if (head == null) {
            System.out.println("List is empty");
            return;
        }

        Node temp = head;

        int i = 0;

        while (temp != null) {

            if (i == index) {
                System.out.println(temp.data);
                return;
            }

            i++;
            temp = temp.next;
        }

        System.out.println("Index doesn't exist!");
        assert (false);
        return;
    }

    public static void main(String[] args) {

        LinkedList list = new LinkedList();

        list.push(1);
        list.push(2);
        list.push(3);
        list.push(4);
        list.push(5);
        list.push(6);

        list.getNthNode(1);
        list.getNthNode(3);
        list.getNthNode(5);
        list.getNthNode(10);

    }

}