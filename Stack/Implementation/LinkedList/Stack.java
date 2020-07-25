package Stack.Implementation.LinkedList;

public class Stack {

    StackNode root;

    static class StackNode {
        int data;
        StackNode next;

        StackNode(int data) {
            this.data = data;
        }

    }

    boolean isEmpty() {
        return (root == null) ? true : false;
    }

    void push(int data) {

        StackNode newNode = new StackNode(data);

        if (root == null) {
            root = newNode;
        } else {
            StackNode temp = root;
            root = newNode;
            newNode.next = temp;
        }

        System.out.println(data + " : pushed into stack ");
    }

    int pop() {
        int popped = Integer.MIN_VALUE;
        if (root == null) {
            System.out.println("Stack is empty");
        } else {
            popped = root.data;
            root = root.next;
        }
        return popped;
    }

    int peek() {

        if (root == null) {
            System.out.println("Stack is empty");
            return Integer.MIN_VALUE;
        } else {
            return root.data;
        }
    }

    public static void main(String[] args) {
        Stack s = new Stack();

        System.out.println("Peek() : " + s.peek());

        for (int i = 0; i < 10; i++)
            s.push(i * 100);

        for (int i = 0; i < 5; i++) {
            System.out.println(s.pop());
        }

        System.out.println("isEmpty() : " + s.isEmpty());

        System.out.println("Peek() : " + s.peek());

        for (int i = 0; i < 10; i++) {
            s.pop();
        }

    }

}