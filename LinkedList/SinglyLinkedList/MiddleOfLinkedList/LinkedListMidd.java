
/*

Initialize mid element as head and initialize a counter as 0. 
Traverse the list from head, while traversing increment the 
counter and change mid to mid->next whenever the counter is odd.
So the mid will move only half of the total length of the list.

*/

package LinkedList.SinglyLinkedList.MiddleOfLinkedList;

public class LinkedListMidd {

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
        }

        Node temp = head;
        Node middle = head;
        int count = 0;

        while (temp != null) {

            if (count % 2 != 0) {
                middle = middle.next;
            }

            temp = temp.next;
            count++;

        }

        if (middle != null) {
            System.out.println(middle.data);
        }

        return;
    }

    public static void main(String[] args) {

        LinkedListMidd list = new LinkedListMidd();

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