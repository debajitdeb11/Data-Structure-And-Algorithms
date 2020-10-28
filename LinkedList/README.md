# LinkedList

### Disadvantages of Array DS
- Either size is fixed and pre-allocated( in both fixed and variable size arrays ), or the worst case insertion at the end is `O(N)`
- Insertion in middle (or Beginning) is always costly
- Deletion from the middle (or Beginning) is always costly
- Implementation of Data Structure like queue and dequeue is complex with arrays

### Problem with Array DS
- Implementation of Round Robin Scheduling
- Given a sequence of items. Whenever we see an item x in the sequence, we need to replace it with 5 instances of another item y
- Merging Multiple sequences
- Problem with System Programming where the memory is fragmented

### Important points
- In Java Arrays are always allocated in heaps
- Vectors are always allocated in heaps

### Implementation of Singly Linkedlist

```
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

    return 0;
}
```

### Implementation of Doubly LinkedList

```
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
```

## Types of LinkedList
- __Singly LinkedList__
- __Doubly LinkedList__
- __Circular LinkedList__

### Singly LinkedList vs Doubly LinkedList

Singly LL | Doubly LL
--- | --- | --- | --- | 
Can be traversed only in a single direction | - Can be traversed in both direction
Deletion is not possible in constant time | Deletion is possible with constant time
Insert & delete before a given node is not possible | Is possible



## Reference
<link href="http://www.smartredirect.de/redir/clickGate.php?u=IgKHHLBT&m=1&p=bvjHgP4nHn&t=JZFI6q7h&st=&s=&splash=0&abp=1&url=https%3A%2F%2Fwww.geeksforgeeks.org%2Fskip-list%2F&r=https%3A%2F%2Fwww.google.com%2Fsearch%3Fchannel%3Dfs%26client%3Dubuntu%26q%3Dskip%2Blist">SKIPLIST</link>