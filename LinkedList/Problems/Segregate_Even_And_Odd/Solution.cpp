// TODO: Incomplete

/* Segregate Even and Odd in a Linkedlist */


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

Node* segregate(Node* head) {

    Node* eS = NULL, *eE = NULL, *oS = NULL, *oE = NULL;

    for (Node* curr = head; curr != NULL; curr = curr->next) {

        int x = curr->data;

        if (x % 2 == 0) {
            if (eS == NULL) {
                eS = curr;
                eS = eE;
            } else {
                eE->next = curr;
                eE = eE->next;
            }
        } else {
            if (oS == NULL) {
                oS = curr;
                oE = oS;
            } else {
                oE->next = curr;
                oE = oE->next;
            }
        }

    }

    // After for Loop
    if (oS == NULL || eS == NULL) return head;

    eE->next = oS;
    oE->next = NULL;

    return eS;
}




int main() {

    Node* head = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(3);
    Node* forth = new Node(4);
    Node* fifth = new Node(5);

    head->next = second;
    second->next = third;
    third->next = forth;
    forth->next = fifth;

    display(head);

    head = segregate(head);

    display(head);

    return 0;
}