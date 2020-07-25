package Stack.Implementation.Array;

public class Stack {

    static final int MAX = 100;
    int top;
    int a[] = new int[MAX]; // Maximum size of stack

    Stack() {
        top = -1;
    }

    // To check if the stack is empty or not
    boolean isEmpty() {
        return (top < 0) ? true : false;
    }

    // To push element into stack
    boolean push(int data) {
        if (top > (MAX - 1)) {
            System.out.println("Stack Overflow");
            return false;
        }

        else {
            a[++top] = data;
            System.out.println(data + " : pushed into stack");
            return true;
        }
    }

    // To pop element out of the stack
    int pop() {
        if (top < 0) {
            System.out.println("Stack Underflow");
            return Integer.MIN_VALUE;
        } else {
            int x = a[top--];
            return x;
        }
    }

    // To display the top element of the stack
    int peek() {
        if (top < 0) {
            System.out.println("Stack Underflow");
            return Integer.MIN_VALUE;
        } else {
            int x = a[top];
            return x;
        }
    }

    public static void main(String[] args) {
        Stack s = new Stack();

        for (int i = 0; i < 10; i++) {
            s.push(i);
        }

        for (int i = 0; i < 10; i++) {
            System.out.println(s.peek());
            System.out.println(s.pop());
        }

        System.out.println(s.peek());
        System.out.println("IsEmpty : " + s.isEmpty());

        s.push(Integer.MAX_VALUE);
        System.out.println(s.peek());
        System.out.println("IsEmpty: " + s.isEmpty());
    }

}