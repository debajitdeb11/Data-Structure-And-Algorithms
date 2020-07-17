// Searching an element in the LinkedList 
// Using Iterative Method

package LinkedList.SinglyLinkedList.Searching;

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

        // if List is empty
        if (head == null) {
            head = new Node(data);
            return;
        }

        Node newNode = new Node(data);

        newNode.next = head;
        head = newNode;
        return;
    }

    boolean search(int key) {

        if (head == null) {
            System.out.println("List is Empty\nItem not Found!");
            return false;
        }

        Node temp = head;

        while (temp != null && temp.data != key) {
            temp = temp.next;
        }

        if (temp == null) {
            System.out.println("Search Complete");
            return false;
        }

        return true;

    }

    void find(int key) {
        if (search(key)) {
            System.out.println("Key Found!");
        } else {
            System.out.println("Key Doesn't Exist!");
        }
    }

    public static void main(String[] args) {
        LinkedList list = new LinkedList();

        list.push(1);
        list.push(2);
        list.push(3);
        list.push(4);
        list.push(5);

        list.find(0);

        list.find(4);

    }

}