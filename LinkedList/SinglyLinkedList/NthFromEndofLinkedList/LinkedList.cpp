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
        this->next = NULL;
    }
};

void append(Node **head, int data)
{

    Node *newNode = new Node(data);

    Node *temp = *head;

    if (*head == NULL)
    {
        *head = newNode;
        return;
    }

    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = newNode;
    return;
}

void print(Node *head)
{

    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }

    cout << "\n";
}

void printFromTheEnd(Node *head, int indexFromEnd)
{

    int length = 0;

    if (head == NULL)
    {
        cout << "List is Empty\n";
        return;
    }

    Node *temp = head;

    while (temp != NULL)
    {
        temp = temp->next;
        length++;
    }

    if (indexFromEnd > length)
    {
        cout << "Index doesn't exist\n";
        return;
    }

    temp = head;

    for (int i = 0; i < length - indexFromEnd; i++)
    {
        temp = temp->next;
    }

    cout << "value at index " << indexFromEnd << " = " << temp->data << "\n";
    return;
}

int main()
{
    Node *head = NULL;
    append(&head, 1);
    append(&head, 2);
    append(&head, 3);
    append(&head, 4);
    print(head);

    printFromTheEnd(head, 1);

    return 0;
}

// // Simple C++ program to find n'th node from end
// #include <bits/stdc++.h>
// using namespace std;

// /* Link list node */
// struct Node
// {
//     int data;
//     struct Node *next;
// };

// /* Function to get the nth node from the last of a linked list*/
// void printNthFromLast(struct Node *head, int n)
// {
//     int len = 0, i;
//     struct Node *temp = head;

//     // count the number of nodes in Linked List
//     while (temp != NULL)
//     {
//         temp = temp->next;
//         len++;
//     }

//     // check if value of n is not
//     // more than length of the linked list
//     if (len < n)
//         return;

//     temp = head;

//     // get the (len-n+1)th node from the beginning
//     for (i = 1; i < len - n + 1; i++)
//         temp = temp->next;

//     cout << temp->data;

//     return;
// }

// void push(struct Node **head_ref, int new_data)
// {
//     /* allocate node */
//     struct Node *new_node = new Node();

//     /* put in the data */
//     new_node->data = new_data;

//     /* link the old list off the new node */
//     new_node->next = (*head_ref);

//     /* move the head to point to the new node */
//     (*head_ref) = new_node;
// }

// // Driver Code
// int main()
// {
//     /* Start with the empty list */
//     struct Node *head = NULL;

//     // create linked 35->15->4->20
//     push(&head, 20);
//     push(&head, 4);
//     push(&head, 15);
//     push(&head, 35);

//     printNthFromLast(head, );
//     return 0;
// }
