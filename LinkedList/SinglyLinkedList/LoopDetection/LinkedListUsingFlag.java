/*

Solution 2: This problem can be solved without hashmap by modifying the linked list data-structure.
Approach: This solution requires modifications to the basic linked list data structure.

    Have a visited flag with each node.
    Traverse the linked list and keep marking visited nodes.
    If you see a visited node again then there is a loop. 
    This solution works in O(n) but requires additional information with each node.
    A variation of this solution that doesn’t require modification to basic data structure 
    can be implemented using a hash, just store the addresses of visited nodes in a hash 
    and if you see an address that already exists in hash then there is a loop.



    Time complexity:O(n).
    Only one traversal of the loop is needed.
    Auxiliary Space:O(n).
    n is the space required to store the value in hashmap.


*/

package LinkedList.SinglyLinkedList.LoopDetection;

import LinkedList.SinglyLinkedList.Node;

public class LinkedListUsingFlag {

    FNode head;

    class FNode extends Node {

        private int flag;

        public FNode(int data) {
            super(data);
            this.flag = 0;

        }

    }

    void append(int data) {

        if (head == null) {
            head = new FNode(data);
            return;
        }

        FNode temp = head;

        while (temp.next != null) {

            temp = (FNode) temp.next;

        }

        temp.next = new FNode(data);
        return;
    }

    // To detect the Cycle in Loop
    boolean detectLoop() {
        if (head == null) {
            System.out.println("LinkedList is Empty!");
            return false;
        }

        FNode temp = head;

        while (temp != null) {

            // If the flag is detected then return 1
            if (temp.flag == 1) {
                System.out.println("Loop Detected!");
                return true;
            }

            // Assigning the flag equal to 1
            // to that Node
            temp.flag = 1;

            // jump to the next node
            temp = (FNode) temp.next;

        }

        System.out.println("No Loop is detected!");
        return false;

    }

    public static void main(String[] args) {

        LinkedListUsingFlag list1 = new LinkedListUsingFlag();
        LinkedListUsingFlag list2 = new LinkedListUsingFlag();

        list1.append(1);
        list1.append(2);
        list1.append(3);
        list1.append(4);
        list1.append(5);
        list1.append(6);

        // LinkedList with Loop
        list1.head.next.next.next = list1.head;

        list1.detectLoop();

        list2.append(1);
        list2.append(2);
        list2.append(3);
        list2.append(4);
        list2.append(5);

        // LinkedList Without Loop
        list2.detectLoop();

    }

}