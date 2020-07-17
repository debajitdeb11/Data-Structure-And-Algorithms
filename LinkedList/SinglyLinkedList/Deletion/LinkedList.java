package LinkedList.SinglyLinkedList.Deletion;

public class LinkedList {

    Node head;

    // To push data to the front
    void push(int data) {
        Node newNode = new Node(data);

        if (head == null) {
            head = newNode;
            return;
        }

        newNode.next = head;
        head = newNode;
    }

    // To push the data to the middle
    void pushMiddle(Node prev, int data) {

        if (prev == null) {
            System.out.println("Error: Previous node is null!");
            return;
        }

        Node newNode = new Node(data);
        newNode.next = prev.next;
        prev.next = newNode;
        return;
    }

    // To push the data to the end
    void append(int data) {

        if (head == null) {
            head = new Node(data);
            return;
        }

        Node newNode = new Node(data);

        Node temp = head;

        while (temp.next != null) {
            temp = temp.next;
        }

        temp.next = newNode;
        return;
    }

    // To delete the node
    void deleteNodeByKey(int key) {

        // Store head node
        Node temp = head;
        Node prev = null;

        // If the head node itself contains the key
        if (temp != null && temp.data == key) {
            head = temp.next;
            return;
        }

        // Search the key to be deleted,keep track
        // of the previous node as we need to change
        // temp.next
        while (temp != null && temp.data != key) {
            prev = temp;
            temp = temp.next;
        }

        // if key doesn't found then return
        if (temp == null)
            return;

        // else we will unlink the temp
        prev.next = temp.next;
        return;

    }

    void deleteNodeByPosition(int position) {

        // If the List is Empty
        if (head == null) {
            System.out.println("List is Empty");
            return;
        }

        // If the position is equal to the 1st Node
        if (position == 0) {
            head = head.next;
            return;
        }

        Node temp = head;

        // Find the previous node of the node to be deleted
        for (int i = 0; temp != null && i < position - 1; i++) {
            temp = temp.next;
        }

        if (temp == null || temp.next == null) {
            System.out.println("Position doesn't exist");
            return;
        }

        Node next = temp.next.next;

        temp.next = next;

        return;
    }

    // Display the List
    void display() {
        Node temp = head;
        while (temp != null) {
            System.out.print(temp.data);
            temp = temp.next;

            if (temp != null)
                System.out.print(" -> ");
        }
        System.out.println();
    }

    public static void main(String[] args) {

        LinkedList llist = new LinkedList();

        llist.push(1); // 1

        llist.push(2); // 2 -> 1

        llist.append(3); // 2 -> 1 -> 3

        llist.pushMiddle(llist.head.next, 4); // 2 -> 1 -> 4 -> 3

        llist.display(); // Display the list

        llist.deleteNodeByKey(1); // 2 -> 4 -> 3

        llist.display();

        llist.deleteNodeByPosition(0);

        llist.display();
    }

}