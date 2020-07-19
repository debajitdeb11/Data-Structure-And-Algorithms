
/*

    Function to check if a singly linked list is palindrome

    METHOD 1 (Use a Stack)

    A simple solution is to use a stack of list nodes. This mainly involves three steps.
    Traverse the given list from head to tail and push every visited node to stack.
    Traverse the list again. For every visited node, pop a node from stack 
    and compare data of popped node with currently visited node.
    If all nodes matched, then return true, else false.


    **The time complexity of the above method is O(n).

*/

package LinkedList.SinglyLinkedList.IsPalindrome.UsingStack;

import java.util.Stack;

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

    boolean isPalindrome() {

        Node temp = head;

        Stack<Integer> s = new Stack<>();

        while (temp != null) {
            s.push(temp.data);
            temp = temp.next;
        }

        temp = head;

        while (temp != null) {

            Integer i = s.pop();

            if (temp.data == i) {
                temp = temp.next;
            } else {
                return false;
            }
        }
        return true;
    }

    public static void main(String[] args) {

        LinkedList list = new LinkedList();

        list.append(1);
        list.append(2);
        list.append(3);
        list.append(3);
        list.append(2);
        list.append(1);

        String result = (list.isPalindrome()) ? "LinkedList is Palindrome!" : "Not Palindrome!";

        System.out.println(result);

    }

}