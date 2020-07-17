// Reccursive Method

package LinkedList.SinglyLinkedList.LengthOfLinkedList;

public class LinkedListRec {

    private Node head;

    class Node {
        int data;
        Node next;

        Node(int data) {
            this.data = data;
            this.next = null;
        }
    }

    void push(int data) {

        if (head == null) {
            head = new Node(data);
            return;
        }

        Node newNode = new Node(data);
        newNode.next = head;
        head = newNode;
        return;
    }

    // Returns count the no of node in the LinkedList
    int countNode(Node node) {

        if (node == null)
            return 0;

        return 1 + countNode(node.next);

    }

    Object getCount() {
        Node temp = head;
        return countNode(temp);
    }

    public static void main(String[] args) {
        LinkedListRec ll = new LinkedListRec();

        ll.push(1);
        ll.push(2);
        ll.push(3);
        ll.push(4);
        ll.push(5);

        System.out.println(ll.getCount());

    }

}