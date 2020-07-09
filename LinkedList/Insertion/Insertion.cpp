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

Node *push(Node *head, int data)
{

    if (head == NULL)
    {
        head = new Node(data);
    }

    Node *newNode = new Node(data);

    newNode->next = head;

    head = newNode;

    return head;
}

Node *push(Node *head, int index, int data)
{
    int i = 0;

    Node *temp = head;

    while (i != index)
    {
        temp = temp->next;
        i++;
    }

    Node *new_node = new Node(data);

    new_node->next = temp->next;

    temp->next = new_node;

    return head;
}

Node *append(Node *head, int data)
{
    if (head == NULL)
    {
        head == new Node(data);
        return head;
    }

    Node *temp = head;

    while (temp->next != NULL)
        temp = temp->next;

    temp->next = new Node(data);

    return head;
}

void display(Node *head)
{
    while (head != NULL)
    {
        cout << head->data;
        head = head->next;

        if (head != NULL)
        {
            cout << " -> ";
        }
    }
    cout << "\n";
}

int main()
{

    Node *head = new Node(1); // 1
    head = push(head, 2);     // 2 -> 1
    head = push(head, 3);     // 3 -> 2 -> 1
    head = push(head, 0, 4);  // 3 -> 4 -> 2 -> 1
    head = append(head, 5);   // 3 -> 4 -> 2 -> 1 -> 5

    display(head);

    return 0;
}