/*

*********************************** Optimized Solution *****************************
Reversing a LinkedList

*/

#include<iostream>
using namespace std;

struct Node {

    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

Node* reverse(Node* head) {

    Node* curr = head;
    Node *prev = NULL;

    while (curr != NULL) {

        Node* next = curr->next;
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr  = next;
    }

    return prev;
}

void display (Node* head) {

    if (head == NULL)
        return;

    Node* temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << "\n";
}

int main() {

    Node* head = new Node(1);
    Node* first = new Node(2);
    Node* second = new Node(3);
    Node* third = new Node(4);


    head->next = first;
    first->next = second;
    second->next = third;

    display(head);

    head = reverse(head);

    display(head);

    return 0;
}