/* C++ Implementation of Stack using Linkedlist */
#include <iostream>
using namespace std;

class Node {

    public:
        int data;
        Node* next;

        Node(int data) {
            this->data = data;
            this->next = NULL;
        }
};

class MyStack {

    private:
        Node* head;
        int size;

    public:
        MyStack() {
            this->head = NULL;
            this-> size = 0;
        }

        void push(int x) {
            Node* new_node = new Node(x);
            new_node->next = head;
            head = new_node;
            size++;
        }

        int pop() {
            if (head == NULL) {
                cout << "STACK UNDERFLOW\n";
                return INT32_MIN;
            }

            int x = head->data;
            Node* temp = head;
            head = temp->next;
            delete(temp);
            size--;
            return x;
        }

        int sizez() {
            return this->size;
        }

        bool isEmpty() {
            return (size == 0);
        }

        int peek() {
            if (head == NULL) {
                cout << "STACK OVERFLOW\n";
                return INT32_MIN;
            } else {
                return head->data;
            }
        }
};

int main() {

    MyStack s;
    
    s.push(1);
    s.push(2);

    cout << s.peek() << "\n";

    s.pop();

    cout << s.peek() << "\n";


    return 0;
}