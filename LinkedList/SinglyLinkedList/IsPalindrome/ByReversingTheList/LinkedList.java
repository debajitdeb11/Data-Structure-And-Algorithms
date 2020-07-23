// TODO: Incomplete

package LinkedList.SinglyLinkedList.IsPalindrome.ByReversingTheList;

public class LinkedList {

    Node head;

    void append(Object data) {

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

    Node middle() {

        if (head == null) {
            System.out.println("LinkedList is empty");
            return null;
        }

        Node slowPtr = head;
        Node fastPtr = head;

        while (fastPtr != null && fastPtr.next != null) {
            fastPtr = fastPtr.next.next;
            slowPtr = slowPtr.next;
        }

        return slowPtr;
    }

    Node reverse(Node node) {

        Node current = node;
        Node prev = null;
        Node next = null;

        while (current != null) {

            next = current.next;
            current.next = prev;

            prev = current;
            current = next;
        }

        return node;
    }

    boolean isPalindrome() {
        Node middle = middle();
        Node temp = middle;
        Node revHead = reverse(middle);

        while (temp != middle && revHead != null) {
            if (temp.data.equals(revHead.data)) {
                temp = temp.next;
                revHead = revHead.next;
            } else {
                return false;
            }
        }
        return true;

    }

    void printList() {
        Node temp = head;

        while (temp != null) {
            System.out.print(temp.data);
            temp = temp.next;

            if (temp != null) {
                System.out.print(" -> ");
            }
        }
        System.out.println();
    }

    public static void main(String[] args) {
        LinkedList list = new LinkedList();
        list.append((char) 'A');
        list.append((char) 'B');
        list.append((char) 'C');
        list.append((char) 'B');
        list.append((char) 'A');

        list.printList();

        System.out.println(list.isPalindrome());

        LinkedList list2 = new LinkedList();

        list2.append(1);
        list2.append(2);
        list2.append(3);
        list2.append(4);
        list2.append(5);

        list2.printList();

        System.out.println(list2.isPalindrome());

    }

}