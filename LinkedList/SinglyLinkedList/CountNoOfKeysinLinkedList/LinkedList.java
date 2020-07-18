/*

 Method 1- Without Recursion
Algorithm:

1. Initialize count as zero.
2. Loop through each element of linked list:
     a) If element data is equal to the passed number then
        increment the count.
3. Return count. 


*/

package LinkedList.SinglyLinkedList.CountNoOfKeysinLinkedList;

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

    int count(int key) {
        int count = 0;

        if (head == null) {
            System.out.println("List is empty");
            return -1;
        }

        Node temp = head;

        while (temp != null) {

            if (temp.data == key)
                count++;

            temp = temp.next;

        }

        return count;

    }

    public static void main(String[] args) {
        LinkedList linkedList = new LinkedList();

        LinkedList linkedList2 = new LinkedList();

        linkedList.append(1);
        linkedList.append(2);
        linkedList.append(3);
        linkedList.append(4);
        linkedList.append(5);
        linkedList.append(5);

        System.out.println("Frequency of : 0 " + linkedList.count(0));
        System.out.println("Frequency of : 1 " + linkedList.count(1));
        System.out.println("Frequency of : 10 " + linkedList.count(10));
        System.out.println("Frequency of : 5 " + linkedList.count(5));
        System.out.println("Frequency of : 10000 in linkedlist 2 " + linkedList2.count(1000));

    }

}