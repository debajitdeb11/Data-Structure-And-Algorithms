
// To find the middle of the List using Two pointer Approach

/*

Traverse linked list using two pointers. 
Move one pointer by one and other pointer by two.
When the fast pointer reaches end slow pointer will reach middle of the linked list.

*/

package LinkedList.SinglyLinkedList.MiddleOfLinkedList;

public class LinkedListTwoPointer {

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

    void middleNode() {

        if (head == null) {
            System.out.println("List is Empty");
            return;
        }

        Node fastPtr = head;
        Node slowPtr = head;
        int index = 0;

        while (fastPtr != null && fastPtr.next != null) {

            fastPtr = fastPtr.next.next;
            slowPtr = slowPtr.next;
            index++;

        }

        System.out.println("Middle Element is: " + slowPtr.data + " & Middle index is " + index);

    }

    public static void main(String[] args) {

        LinkedListTwoPointer list = new LinkedListTwoPointer();

        list.append(1);
        list.append(2);
        list.append(3);
        list.append(4);
        list.append(5);

        list.middleNode();

    }

}