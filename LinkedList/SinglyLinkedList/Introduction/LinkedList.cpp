#include "Node.h"

int main()
{

    // Initilizing nodes
    Node *head = new Node(1);
    Node *second = new Node(2);
    Node *third = new Node(3);

    // Linking Node
    head->next = second;  // 1 -> 2
    second->next = third; // 1 -> 2 -> 3

    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data;

        temp = temp->next;

        if (temp != NULL)
            cout << " -> ";
    }
    cout << "\n";

    return 0;
}