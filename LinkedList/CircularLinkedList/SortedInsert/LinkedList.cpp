/* 

Write a C function to insert a new value in 
a sorted Circular Linked List (CLL).

Algorithm:

1) Linked List is empty:  
    a)  since new_node is the only node in CLL, make a self loop.      
          new_node->next = new_node;  
    b) change the head pointer to point to new node.
          *head_ref = new_node;


2) New node is to be inserted just before the head node:    
  (a) Find out the last node using a loop.
         while(current->next != *head_ref)
            current = current->next;
  (b) Change the next of last node. 
         current->next = new_node;
  (c) Change next of new node to point to head.
         new_node->next = *head_ref;
  (d) change the head pointer to point to new node.
         *head_ref = new_node;


3) New node is to be  inserted somewhere after the head: 
   (a) Locate the node after which new node is to be inserted.
         while ( current->next!= *head_ref && 
             current->next->data data)
         {   current = current->next;   }
   (b) Make next of new_node as next of the located pointer
         new_node->next = current->next;
   (c) Change the next of the located pointer
         current->next = new_node; 

*/

#include <iostream>
using namespace std;

class Node
{

public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
    }
};

class LinkedList
{

private:
    Node *head;

public:
    LinkedList()
    {
        head = NULL;
    }

    void sortedInsert(int data)
    {
        Node *current = head;

        Node *new_node = new Node(data);

        /* Case I: If the head is null */
        if (head == NULL)
        {
            head = new_node;
            new_node->next = head;
            return;
        }

        /* Case II: if new data is <= head  */
        if (new_node->data <= head->data)
        {

            new_node->next = head;

            head = new_node;

            while (current->next != head)
            {
                current = current->next;
            }

            current->next = head;
            return;
        }

        // Case III: if new_node->data > head->data

        current = head;

        while (new_node->data > current->next->data)
        {
            current = current->next;
        }

        Node *temp = current;
        current->next = new_node;
        new_node->next = temp->next;
        return;
    }

    void print()
    {
        if (head == NULL)
        {
            printf("List is empty!\n");
            return;
        }

        Node *temp = head;

        do
        {
            cout << temp->data;

            temp = temp->next;

            if (temp != head)
            {
                cout << " -> ";
            }

        } while (temp != head);

        cout << "\n";
    }
};

int main()
{

    LinkedList *list = new LinkedList();
    list->print();

    LinkedList *list2 = new LinkedList();
    list2->sortedInsert(2);
    list2->sortedInsert(1);
    // list2->sortedInsert(5);
    // list2->sortedInsert(3);

    list2->print();

    return 0;
}