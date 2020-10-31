// Implement two stacks in an array

/*
Method 2 (A space efficient implementation)
This method efficiently utilizes the available space.
It doesn’t cause an overflow if there is space available in arr[]. 
The idea is to start two stacks from two extreme corners of arr[]. 
stack1 starts from the leftmost element, the first element in stack1 
is pushed at index 0. The stack2 starts from the rightmost corner, 
the first element in stack2 is pushed at index (n-1).
Both stacks grow (or shrink) in opposite direction. 
To check for overflow, all we need to check is for 
space between top elements of both stacks. 

*/

package Stack.Implement2Stack;

public class TwoStack {

    final int MAX_SIZE;
    int top1, top2;
    int a[];

    TwoStack(int MAX_SIZE) {
        this.MAX_SIZE = MAX_SIZE;
        this.top1 = -1;
        this.top2 = MAX_SIZE;
        this.a = new int[MAX_SIZE];
    }

    // Method to push data in Stack 1
    void push1(int data) {
        if (top1 < top2 - 1) {
            a[++top1] = data;
        } else {
            System.out.println("Stack Overflow");
            System.exit(1);
        }
    }

    // Method to push data in stack 2
    void push2(int data) {
        if (top1 < top2 - 1) {
            a[--top2] = data;
        } else {
            System.out.println("Stack Overflow");
            System.exit(1);
        }
    }

    // Method to pop data from from stack 1
    int pop1() {
        if (top1 > -1) {
            int x = a[top1--];
            return x;
        } else {
            System.out.println("Stack Underflow");
            System.exit(1);
            return Integer.MIN_VALUE;
        }
    }

    // Method to pop data from stack 2
    int pop2() {
        if (top2 < MAX_SIZE) {
            int x = a[top2++];
            return x;
        } else {
            System.out.println("Stack Underflow");
            System.exit(1);
            return Integer.MIN_VALUE;
        }
    }

    public static void main(String[] args) {

        TwoStack stack = new TwoStack(5);
        stack.push1(1);
        stack.push2(2);
        stack.push1(3);
        stack.push2(4);
        stack.push1(0);
        stack.push2(9);

    }

}