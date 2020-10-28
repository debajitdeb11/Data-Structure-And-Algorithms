// Implementation of Circular LinkedList
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

// Insertion at the beginning at O(N)
Node* insert_begin(Node* head, int data) {
    
    Node* new_node = new Node(data);

    if (head == NULL)
        new_node->next = new_node;
    else {
        Node* temp = head;

        while(temp->next != head)
            temp = temp->next;

        temp->next = new_node;
        new_node->next = head;
    }
    return new_node;
}

/************* Important *****************/
// Insertion at the beginning at O(1) time
Node* insert_beg_eff(Node* head, int data) {

    Node* new_node = new Node(data);

    if (head == NULL) {
        new_node->next = new_node;
        return new_node;
    }

    else {
        new_node->next = head->next;
        head->next = new_node;

        int temp = new_node->data;
        new_node->data = head->data;
        head->data = temp;
        return head;
    }
}

// Insertion at the end at O(N) Time Complexity
Node* insert_end(Node* head, int data) {
    
    Node* new_node = new Node(data);

    if (head == NULL)
        new_node->next = new_node;

    else {
        Node* temp = head;

        while(temp->next != head) temp = temp->next;
        temp->next = new_node;
        new_node->next = head;
    }
    return head;
}

// Insertion End with O(1) Time Complexity
Node* insert_end_eff(Node* head, int data) {

    Node* new_node = new Node(data);

    if (head == NULL) {
        new_node->next = new_node;
        return new_node;
    }

    else {

        Node* temp = head;

        new_node->next = temp->next;
        temp->next = new_node;

        int d = head->data;
        head->data = new_node->data;
        new_node->data = d;
        return new_node;
    }

}
 
// Deletion from head with O(N) Time Complexity
Node* delete_head(Node* head) {

    Node* temp = head;

    if (head == NULL) return NULL;

    if (head->next == NULL) {
        delete(head);
        return NULL;
    }

    while(temp->next != head)
        temp = temp->next;

        temp->next = head->next;

        delete(head);

    return temp->next;
}


// Deletion from the head with O(1) Time Complexity
Node* delete_head_eff(Node* head) {
    
    if (head == NULL) return NULL;

    if (head->next == NULL) {
        delete(head);
        return NULL;
    }

    head->data = head->next->data;
    
    Node* temp = head->next;
    
    head->next = head->next->next;

    delete(temp);
    
    return head;
}

// Deletion of K-th Node from the LinkedList
Node* delete_kth(Node* head, int pos) {

    Node* temp = head;

    Node* prev;

    if (pos == 1)
        return delete_head_eff(head);

    for (int i = 1; i < pos; i++) {
        prev = temp;
        temp = temp->next;

        if(temp == head) {
            cout << "Out of Bound\n";
            return head;
        }

    }

    prev->next = temp->next;
    delete(temp);

    return head;
} 

void display(Node* head) {

    if (head == NULL)
        return;

    Node* temp = head;

    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while(temp != head);

    cout << "\n";
}

int main() {

    Node* head = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(3);
    Node* forth = new Node(4);

    head->next = second;
    second->next = third;
    third->next = forth;
    forth->next = head;
    display(head);

    head = insert_begin(head, 10);
    display(head);

    head = insert_beg_eff(head, 100);
    display(head);

    head = insert_end(head, 200);
    display(head);

    head = insert_end(head, 500);
    display(head);

    // head = delete_head(head);
    // display(head);

    // head = delete_head_eff(head);
    // display(head);


    head = delete_kth(head, 1);
    display(head);

    
    return 0;
}