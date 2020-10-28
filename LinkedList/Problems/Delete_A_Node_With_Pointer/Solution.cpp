/* Delete a Node using a pointer given to it */
#include <iostream>
using namespace std;

struct Node {

    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

void display(Node *head)
{

    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data;

        temp = temp->next;

        if (temp != NULL)
            cout << " -> ";
    }

    cout << "\n";
}


void delete_node(Node* node) {

    Node* temp = node->next;

    node->data = temp->data;
    
    node->next = temp->next;
    delete(temp);
   
}


int main() {

    Node* head = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(3);
    Node* forth = new Node(4);
    Node* fifth = new Node(5);

    display(head);

    delete_node(third);

    display(head);

    return 0;
}