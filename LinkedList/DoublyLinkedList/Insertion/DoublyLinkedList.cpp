// DS for Doubly LinkedList

#include <iostream>
using namespace std;

// Node for Doubly LinkedList
struct Node {

    int data;
    Node* prev;
    Node* next;

    Node(int data) {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
};


// Insert Node at the beginning
Node* insert_begin(Node* head, int data) {

    if (head == NULL)
        return new Node(data);

    Node* new_node = new Node(data);
    new_node->next = head;
    head->prev = new_node;

    return new_node;
}


// Insert Node at the end
Node* insert_end(Node* head, int data) {

    if (head == NULL)
        return new Node(data);

    if (head->next == NULL) {
        head->next->next = new Node(data);
        return head;
    }

    Node* temp = head;
    Node* new_node = new Node(data);

    while(temp->next != NULL)
        temp = temp->next;

    temp->next = new_node;
    new_node->prev = temp;

    return head;
}


// Delete Node from the beginning
Node* delete_head(Node* head) {

    if (head == NULL)
        return NULL;

    if (head->next == NULL) {
        delete(head);
        return NULL;
    }

    Node* temp = head;

    head = temp->next;
    head->prev = NULL;

    delete(temp);
    return head;
    
}

// Delete Node from the end
Node* delete_tail(Node* head) {

    if (head == NULL)
        return NULL;

    if (head->next == NULL) {
        delete(head);
        return NULL;
    }

    Node* cur_node = head;
    
    while(cur_node->next != NULL)
        cur_node = cur_node->next;

    cur_node->prev->next = NULL;
    delete(cur_node);
    return head;
}

// Display the LL forward
void display_for(Node *head) {

    Node* cur_node = head;

    while(cur_node != NULL) {
        cout << cur_node->data;
        cur_node = cur_node->next;

        if(cur_node != NULL)
            cout << " -> ";
    }
    cout << "\n";
}


// Display LL backward
void display_rev(Node* head) {

    Node *temp = head;

    while(temp->next != NULL)
        temp = temp->next;

    while (temp != NULL)
    {
        cout << temp->data;
        temp = temp->prev;

        if (temp != NULL)
            cout << " -> ";
    }
    cout << "\n";
}

int main() {

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

    display_for(head);
    display_rev(head);

    head = insert_begin(head, 10);
    display_for(head);
    display_rev(head);

    head = insert_end(head, 200);
    display_for(head);
    display_rev(head);

    head = delete_head(head);
    display_for(head);
    display_rev(head);

    head = delete_tail(head);
    display_for(head);
    display_rev(head);


    return 0;
}