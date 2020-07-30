#include <iostream>
using namespace std;

class StackNode
{
public:
    int data;
    StackNode *next;

    StackNode(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

class Stack
{

private:
    StackNode *root;

public:
    Stack()
    {
        root = NULL;
    }

    // To check if the Stack is Empty or not
    bool isEmpty()
    {
        return (root == NULL) ? true : false;
    }

    // To push element to the Stack
    void push(int data)
    {

        if (root == NULL)
        {
            root = new StackNode(data);
        }
        else
        {

            StackNode *newStackNode = new StackNode(data);
            newStackNode->next = root;
            root = newStackNode;
        }

        cout << data << " is Pushed to the Stack\n";
    }

    // To pop element from the Stack
    int pop()
    {
        if (isEmpty())
        {
            cout << "Stack Underflow\n";
            return INT32_MIN;
        }
        else
        {
            int popped = root->data;
            root = root->next;
            return popped;
        }
    }

    // To peek the top of the Stack
    int peek()
    {
        if (isEmpty())
        {
            cout << "Stack Underflow\n";
            return INT32_MIN;
        }
        else
        {
            return root->data;
        }
    }
};

int main()
{

    Stack *s1 = new Stack();

    cout << "IsEmpty: " << s1->isEmpty() << "\n";

    s1->push(1);
    s1->push(2);
    s1->push(3);
    s1->push(4);

    cout << "Peek: " << s1->peek() << "\n";

    s1->pop();

    cout << "Peek: " << s1->peek() << "\n";



    return 0;
}