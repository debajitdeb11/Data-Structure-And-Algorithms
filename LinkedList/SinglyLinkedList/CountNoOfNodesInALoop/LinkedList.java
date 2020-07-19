/**
    
Approach: It is known that Floyd’s Cycle detection algorithm terminates 
when fast and slow pointers meet at a common point. 
It is also known that this common point is one of the loop nodes. 
Store the address of this common point in a pointer variable say (ptr). 
Then initialize a counter with 1 and start from the common point and 
keeps on visiting the next node and increasing the counter till the common pointer is reached again.
At that point, the value of the counter will be equal to the length of the loop.

Algorithm:

    Find the common point in the loop by using the Floyd’s Cycle detection algorithm
    Store the pointer in a temporary variable and keep a count = 0
    Traverse the linked list until the same node is reached again and 
    increase the count while moving to next node.
    Print the count as length of loop



    Complexity Analysis:

    Time complexity:O(n).
    Only one traversal of the linked list is needed.
    Auxiliary Space:O(1).
    As no extra space is required.

 */

package LinkedList.SinglyLinkedList.CountNoOfNodesInALoop;

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

    void countNoOfNodes(Node node) {

        Node temp = node;

        int count = 1;

        while (temp.next != node) {
            count++;
            temp = temp.next;
        }

        System.out.println(count);

    }

    boolean detectLoop() {
        if (head == null) {
            return false;
        }

        Node fastPtr = head;
        Node slowPtr = head;

        while (slowPtr != null && fastPtr != null && fastPtr.next != null) {
            fastPtr = fastPtr.next.next;
            slowPtr = slowPtr.next;

            if (fastPtr == slowPtr) {
                countNoOfNodes(slowPtr);
                return true;
            }

        }

        return false;

    }

    public static void main(String[] args) {
        LinkedList list = new LinkedList();

        list.append(1);
        list.append(2);
        list.append(3);
        list.append(4);
        list.append(5);

        list.head.next.next.next.next.next = list.head.next;

        list.detectLoop();

        LinkedList list2 = new LinkedList();
        list2.append(1);
        list2.append(2);
        list2.append(3);
        list2.append(4);
        list2.append(5);

        list2.detectLoop();

    }

}