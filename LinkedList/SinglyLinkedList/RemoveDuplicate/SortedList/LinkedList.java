
/*

# Remove duplicates from a sorted linked list

Algorithm:
Traverse the list from the head (or start) node.
 While traversing, compare each node with its next node.
If data of next node is same as current node then delete the next node. 
Before we delete a node, we need to store next pointer of the node

Implementation:
Functions other than removeDuplicates() 
are just to create a linked linked list and test removeDuplicates().

*/

package LinkedList.SinglyLinkedList.RemoveDuplicate.SortedList;

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

    void removeDuplicate() {

        /* Another reference to head */
        Node current = head;

        /* Traverse list till the last node */
        while (current != null) {
            Node temp = current;

            /*
             * Compare current node with the next node and keep on deleting them until it
             * matches the current node data
             */

            while (temp != null && temp.data == current.data) {
                temp = temp.next;
            }

            /*
             * Set current node next to the next different element denoted by temp
             */

            current.next = temp;
            current = current.next;

        }

    }

    void displayList() {
        if (head == null) {
            System.out.println("List is empty");
            return;
        }

        Node temp = head;

        while (temp != null) {
            System.out.print(temp.data);
            temp = temp.next;

            if (temp != null) {
                System.out.print(" -> ");
            }
        }
        System.err.println();

    }

    public static void main(String[] args) {
        LinkedList list = new LinkedList();

        list.append(1);
        list.append(1);
        list.append(2);
        list.append(3);
        list.append(3);
        list.append(3);
        list.append(4);
        list.append(4);
        list.append(5);

        list.displayList();

        list.removeDuplicate();

        list.displayList();
    }

}