package LinkedList.SinglyLinkedList.Introduction;

public class LinkedListIntro {

    Node head; // head of the list

    /*
     * Linked list Node. This inner class is made static so that main() can access
     * it
     */
    static class Node {
        int data;
        Node next;

        Node(int data) {
            this.data = data;
            this.next = null;
        }
    }

    public static void main(String[] args) {
        LinkedListIntro list = new LinkedListIntro();

        list.head = new Node(1);
        Node second = new Node(2);
        Node third = new Node(3);

        list.head.next = second;
        second.next = third;

        // System.out.println(list.head.data);
        // System.out.println(second.data);
        // System.out.println(third.data);

        printList(list.head);

    }

    private static void printList(Node node) {
        while (node != null) {
            System.out.print(node.data);
            node = node.next;

            if (node != null)
                System.out.print(" -> ");
        }
        System.out.println();
    }
}