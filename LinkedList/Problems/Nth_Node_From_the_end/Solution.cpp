/*

*********************************** Optimized Solution *****************************
Optimized Solution to find n-th node from the end
of the Linkedlist using two pointer approach

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

int nth_node_from_end(Node* head, int pos) {

    Node* second = head;
    Node* first = head;

    while(pos--) {

        if (first == NULL)
            return -1;

        first = first->next;
    }

    while(first != NULL) {
        second = second->next;
        first = first->next;
    }

    return second->data;
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

    cout << nth_node_from_end(head, 50);

    return 0;
}