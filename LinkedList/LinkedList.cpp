#include <iostream>
using namespace std;

// Node 
struct Node {

    int data;
    Node* next;     // Self-referencial Structure

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

// Insertion at the beginning
Node* insert_begin(Node* head_ref, int data) {

    Node* new_node = new Node(data);

    new_node->next = head_ref;
    return new_node;
}


// Insertion at the end
Node* insert_end(Node* head_ref, int data) {

    Node* new_node = new Node(data);

    if (head_ref == NULL)
        return new_node;

    Node* temp = head_ref;
    while(temp->next != NULL)
        temp = temp->next;

    temp->next = new_node;

    return head_ref; 

}

// Deletion of head
Node* delete_head(Node* head_ref) {

    if (head_ref == NULL || head_ref->next == NULL)
        return NULL;

    Node* temp = head_ref->next;
    delete(head_ref);

    return temp;
}

// Deletion of tail
Node* delete_last(Node* head_ref) {

    Node* temp = head_ref;

    if(head_ref == NULL)
        return NULL;

    if (head_ref->next == NULL) {
        delete(head_ref);
        return NULL;
    }

    while(temp->next->next != NULL)
        temp = temp->next;

    delete(temp->next);
    temp->next = NULL;
    return head_ref;
}

// Printing elements of the LinkedList
void print(Node* node) {
    while (node != NULL) {
        cout << node->data;
        node = node->next;

        if (node != NULL) {
            cout << " -> ";
        }
    }
    cout << "\n";
}

// Recursive Search
void recc_search(Node* node, int key) {

    if (node->next == NULL) {
        cout << "ITEM not found\n";
        return ;
    }

    if (node->data == key) {
        cout << "Item Found using recursive search\n";
        return;
    }
    return recc_search(node->next, key);
}


// Iterative Search
void search(Node* node, int key) {
    Node* cur_node = node;

    while(cur_node->next != NULL) {
        if (cur_node->data == key) {
            cout << "ITEM FOUND\n";
            return;
        }
        cur_node = cur_node->next;
    }

    cout << "Item not found\n";

}

int main() {

    Node* head = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(3);

    head->next = second;
    second->next = third;

    head = insert_begin(head, 5);

    print(head);
    
    head = insert_end(head, 10);

    print(head);

    head = delete_head(head);
    print(head);

    delete_last(head);
    print(head);

    head = insert_end(head, 100);
    head = insert_end(head, 101);
    head = insert_end(head, 102);
    head = insert_end(head, 103);

    print(head);

    search(head, 100);
    search(head, 10000);
    recc_search(head, 1000000);

    return 0;
}