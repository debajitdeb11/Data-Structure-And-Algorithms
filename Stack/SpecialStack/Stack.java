package Stack.SpecialStack;

public class Stack implements IStack {

    static final int MAX = 100;
    int top;
    int a[] = new int[MAX];

    Stack() {
        top = -1;
    }

    @Override
    public boolean push(int data) {

        if (top > MAX - 1) {
            System.out.println("Stack Overflow");
            return false;
        } else {
            a[++top] = data;
            System.out.println(data + " : is Pushed into Stack");
            return true;
        }
    }

    @Override
    public int pop() {
        if (top < 0) {
            System.out.println("Stack Underflow");
            return Integer.MIN_VALUE;
        } else {
            int x = a[top--];
            return x;

        }
    }

    @Override
    public int peek() {
        if (top < 0) {
            System.out.println("Stack Underflow");
            return Integer.MIN_VALUE;
        } else {
            int x = a[top];
            return x;
        }
    }

    @Override
    public boolean isEmpty() {
        return (top < 0) ? true : false;
    }

}