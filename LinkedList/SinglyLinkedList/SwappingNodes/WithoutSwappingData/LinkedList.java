
// Java program to swap two given nodes of a linked list 

package LinkedList.SinglyLinkedList.SwappingNodes.WithoutSwappingData;

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

    void swap(int x, int y) {

        // if x & y are same, Do nothing
        if (x == y) {
            return;
        }

        // Search for x
        Node prevX = null;
        Node currentX = head;

        while (currentX != null && currentX.data != x) {
            prevX = currentX;
            currentX = currentX.next;
        }

        // Search for y
        Node prevY = null;
        Node currentY = head;

        while (currentY != null && currentY.data != y) {
            prevY = currentY;
            currentY = currentY.next;
        }

        // if either x or y is not present then simply return
        if (currentX == null || currentY == null)
            return;

        // If x is not the head of the List
        if (prevX != null) {
            prevX.next = currentY;
        } else { // else make y as the new head
            head = currentY;
        }

        if (prevY != null) {
            prevY.next = currentX;
        } else {
            // make y as new head

            head = currentX;

        }

        // Swap next pointer
        Node temp = currentX.next;
        currentX.next = currentY.next;
        currentY.next = temp;

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
        list.append(2);
        list.append(3);
        list.append(4);
        list.append(5);

        list.displayList();

        list.swap(1, 5);

        list.displayList();

    }

}