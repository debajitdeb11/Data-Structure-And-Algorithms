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

// Using double pointer
void push(Node **head_ref, int data)
{

    Node *new_node = new Node(data);

    // If the List is empty
    if (*head_ref == NULL)
    {
        *head_ref = new_node;
        return;
    }

    // Link the new node to the head of the list
    new_node->next = *head_ref;

    // Change the head to new_node
    *head_ref = new_node;
    return;
}

void pushMiddle(Node *prev, int data)
{

    // Check if the prev node is empty
    if (prev == NULL)
    {
        cout << "Operation Unsuccessful\n Previous Node is empty!\n";
        return;
    }

    Node *new_node = new Node(data);

    // link the next of the previous node with the next of the new_node
    new_node->next = prev->next;

    // Now, Link the next of the prev node with the new_node
    prev->next = new_node;

    return;
}

void append(Node **head_ref, int data)
{

    Node *new_node = new Node(data);

    // If the list is empty
    if (*head_ref == NULL)
    {
        *head_ref = new_node;
        return;
    }

    Node *temp = *head_ref;

    // Find the last node of the List
    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    // Link the last Node of the List with new_node
    temp->next = new_node;

    return;
}

// Deletion of Node by key (Value)
void deleteNodeByKey(Node **head_ref, int key)
{

    Node *temp = *head_ref;
    Node *prev = NULL;

    // Check if the head of the list itself contains the key
    if (temp != NULL && temp->data == key)
    {
        *head_ref = temp->next;
        temp = NULL;
        free(temp);
        return;
    }

    // Search the key to be deleted &
    // keep track of the previous Node
    // to make the prev->next == NULL

    while (temp != NULL && temp->data != key)
    {
        prev = temp;
        temp = temp->next;
    }

    // if key doesn't found
    if (temp == NULL)
    {
        cout << "Key not found!\n";
        return;
    }

    // else, if Key is found

    // Unlink the temp from the List
    prev->next = temp->next;

    // free the temp
    free(temp);
}

// Deletion of node by index
void deleteNodeByIndex(Node **head_ref, int index)
{

    Node *temp = *head_ref;
    int i = 0;

    // If the List is Empty
    if (*head_ref == NULL)
    {
        cout << "List is Empty\n";
        return;
    }

    // If the position == head
    if (index == 0)
    {
        *head_ref = (*head_ref)->next;

        return;
    }

    // Find the Previous Node of the Node to be deleted
    for (int i = 0; temp != NULL && i < index - 1; i++)
    {
        temp = temp->next;
    }

    // If the position is more than the no of Nodes
    if (temp == NULL || temp->next == NULL)
    {
        cout << "Position doesn't found";
        return;
    }

    Node *nextNode = temp->next->next;
    temp->next = nextNode;
    free(temp);

    return;
}

void displayList(Node *head)
{

    if (head == NULL)
    {
        cout << "List is Empty\n";
        return;
    }

    Node *temp = head;

    while (temp != NULL)
    {

        cout << temp->data;

        temp = temp->next;

        if (temp != NULL)
        {
            cout << " -> ";
        }
    }
    cout << "\n";
    return;
}

void displayChoice()
{

    cout << "\t0. Exit"
         << "\n\t1. print List"
         << "\n\t2. Insert Front"
         << "\n\t3. Insert Middle"
         << "\n\t4. Insert Back"
         << "\n\t5. Delete using key"
         << "\n\t6. Delete Using index"
         << "\n\t7. Delete the entire List\n";
}

// To delete the entire LinkedList
// void deleteList(Node *head)
// {
//     head = NULL;
//     free(head);
//     return;
// }

int main()
{

    Node *head = NULL;

    int data;

    int index;

    int choice;

    int condition = true;

    while (condition)
    {
        displayChoice();
        cout << "Enter Choice: ";
        cin >> choice;
        cout << "\n";
        switch (choice)
        {

        case 0:
            condition = false;
            break;

        case 1:
            displayList(head);
            break;

        case 2:
            cout << "Data: ";
            cin >> data;
            cout << "\n";
            push(&head, data);
            displayList(head);
            break;

        case 3:
            cout << "Data: ";
            cin >> data;
            cout << "Index: ";
            cin >> index;
            cout << "\n";
            pushMiddle(head + index, data);
            displayList(head);
            break;

        case 4:
            cout << "Data: ";
            cin >> data;
            cout << "\n";
            append(&head, data);
            displayList(head);
            break;

        case 5:
            cout << "Key: ";
            cin >> data;
            cout << "\n";
            deleteNodeByKey(&head, data);
            displayList(head);
            break;

        case 6:
            cout << "Index: ";
            cin >> index;
            cout << "\n";
            deleteNodeByIndex(&head, index);
            displayList(head);
            break;

            // case 7:
            //     deleteList(head);

        default:
            displayList(head);
        }
    }

    return 0;
}