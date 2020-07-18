// TODO: Program Incomplete

package LinkedList.SinglyLinkedList.NthNodeofLinkedList.LinkedList.SinglyLinkedList;

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

    int getNthNode(Node node, int index) {

        int count = 0;

        if (node == null) {
            return -1;
        }

        if (count == index)
            return node.data;

        return getNthNode(node, index - 1);
    }

    void getNthNode(int index) {
        Node node = head;
        System.out.println(getNthNode(node, index));
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
        list.getNthNode(6);

    }

}