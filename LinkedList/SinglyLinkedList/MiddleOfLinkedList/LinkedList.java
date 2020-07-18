// Program to find the middle of the LinkedList
// Using List Traversal Method

/*
Traverse the whole linked list and count the no. of nodes. 
Now traverse the list again till count/2 and return the node at count/2.
*/

package LinkedList.SinglyLinkedList.MiddleOfLinkedList;

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

    // Push Element to the Back of the LinkedList
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

    // To find the Middle node of the LinkedList
    void middleNode() {

        int length = 0;

        // if the head is null
        if (head == null) {

            System.out.println("List is empty");
            return;
        }

        Node temp = head;

        while (temp != null) {
            temp = temp.next;
            length++;
        }

        // To obtain the middle index of the LinkedList
        int middle = Math.round(length / 2);

        // Re-assign the temp to head of the LinkedList
        temp = head;

        // To keep track of the current index
        short index = 0;

        for (int i = 0; i < middle; i++) {
            temp = temp.next;
            index++;
        }

        System.out.println("Middle Position is at index: " + index + " Data is: " + temp.data);

        return;

    }

    public static void main(String[] args) {

        LinkedList list = new LinkedList();

        list.append(1);
        list.append(2);
        list.append(3);
        list.append(4);
        list.append(5);
        list.append(6);
        list.append(7);

        list.middleNode();

    }

}