/*

Solution 1: Hashing
Approach:
Traverse the list one by one and keep putting the node addresses 
in a Hash Table. At any point, if NULL is reached then return
false and if next of current node points to any of the previously 
stored nodes in Hash then return true.

*/

package LinkedList.SinglyLinkedList.LoopDetection;

import java.util.HashSet;

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

    boolean detectLoop() {

        if (head == null) {
            System.out.println("List is empty");
            return false;
        }

        Node temp = head;

        HashSet<Node> s = new HashSet<>();

        while (temp != null) {

            // If we have already has this node
            // in hashmap it means their is a cycle
            // (Because you we encountering the
            // node second time).
            if (s.contains(temp)) {
                System.out.println("Loop Detected!");
                return true;
            }

            // If we are seeing the node for
            // the first time, insert it in hash
            s.add(temp);

            temp = temp.next;

        }

        System.out.println("No loop Detected!");
        return false;
    }

    public static void main(String[] args) {

        // List - 1 : Linear List with no loop
        LinkedList list = new LinkedList();
        list.append(1);
        list.append(2);
        list.append(3);
        list.append(4);
        list.append(5);
        list.append(6);

        System.out.println(list.detectLoop());

        // List - 2 : Has a loop

        LinkedList list2 = new LinkedList();
        list2.append(1);
        list2.append(2);
        list2.append(3);
        list2.head.next.next.next = list2.head;

        System.out.println(list2.detectLoop());
    }

}