// Iterative Method

#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

class LinkedList
{

private:
    Node *head;

public:
    void push(int data)
    {
        if (head == NULL)
        {
            head = new Node(data);
            return;
        }

        Node *new_node = new Node(data);

        new_node->next = head;
        head = new_node;
        return;
    }

    int length()
    {

        int length = 0;

        // If the List is empty
        if (head == NULL)
        {
            cout << "Linked List is empty\n";
            return length;
        }

        Node *temp = head;

        while (temp != NULL)
        {
            temp = temp->next;
            length++;
        }

        return length;
    }
};

int main()
{

    LinkedList *ll = new LinkedList();
    cout << ll->length() << "\n";

    LinkedList *ll2 = new LinkedList();
    cout << ll2->length() << "\n";

    ll->push(1);
    ll->push(2);
    ll->push(3);
    cout << "List - 1 length: " << ll->length() << "\n";

    ll2->push(1);
    ll2->push(6);
    ll2->push(7);
    ll2->push(8);
    cout << "List - 2 length: " << ll2->length() << "\n";

    return 0;
}