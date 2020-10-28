// Implementation of Circular Doubly LinkedList
#include <iostream>
using namespace std;

struct Node {

    int data;
    Node* prev;
    Node* next;

    Node (int data) {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
};

Node* insert_front(Node* head, int data) {

    Node* new_node = new Node(data);

    if (head == NULL) {
        new_node->next = new_node;
        new_node->prev = new_node;
    }

    else {

        new_node->next = head;
        new_node->prev = head->prev;
        head->prev->next = new_node;
        head->prev = new_node;
    }

    return new_node;
}

void display (Node* head) {

    Node* temp = head;

    if (head == NULL) return;

    else {
        do {
            cout << temp->data << " ";
            temp = temp->next;
        } while(temp != head);
    }
    cout << "\n";
}

int main () {

    Node* head = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(3);
    Node* forth = new Node(4);

    head->next = second;
    second->prev = head;

    second->next = third;
    third->prev = second;

    third->next = forth;
    forth->prev = third;

    forth->next = head;
    head->prev = forth;

    display(head);

    head = insert_front(head, 100);
    display(head);

}