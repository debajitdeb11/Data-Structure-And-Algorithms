/* C++ Implementation of Stack using Array */
#include <iostream>
using namespace std;


class MyStack {

    private:
        int *arr;
        int capacity;
        int top;

    public:
        MyStack(int capacity) {
            this->capacity = capacity;
            this->arr = new int[capacity];
            this->top = -1;
        }

        void push(int x) {
            if(top >= capacity - 1)
                cout << "Stack Overflow\n";
            else
                arr[++top] = x;
        }

        int pop() {
            if (top < 0)
                cout << "Stack Underflow\n";
            else {
                int x = arr[top--];
                return x;
            }
            return INT32_MIN; 
        }

        int peek() {
            if (top < -1) return INT32_MIN;
            return arr[top];
        }

        int size() {
            return (top + 1);
        }

        bool isEmpty() {
            return (top < 0); 
        }

};


int main() {

    MyStack s(100);
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    cout << s.isEmpty() << "\n";
    cout << s.size() << "\n";
    cout << s.peek() << "\n";

    s.pop();
    cout << s.peek() << "\n";

    while(!s.isEmpty())
        s.pop();

    // while(true)
    //     s.push(100);

    cout << s.isEmpty() << "\n";
    cout << s.size() << "\n";
    cout << s.peek() << "\n";


    return 0;
}