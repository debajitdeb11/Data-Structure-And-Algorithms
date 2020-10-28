/* Implementation of Floyed Loop Detection using two pointer approach */

#include <bits/stdc++.h>
using namespace std;

class Node
{

private:
    int data;
    Node *next;

public:
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    void setData(int data)
    {
        this->data = data;
    }

    void setNext(Node *node)
    {
        this->next = node;
    }

    int getData()
    {
        return data;
    }

    Node *getNext()
    {
        return next;
    }
};

bool detect_loop(Node* head) {

    Node* fast = head;
    Node* slow = head;

    if (head == NULL) return false;

    while(slow != NULL  && fast != NULL && fast->getNext() != NULL) {
        slow = slow->getNext();
        fast = fast->getNext()->getNext();

        if (slow == fast) return true;
    }

    return false;

}

Node* loop_deletion(Node* head) {

    Node* slow = head;
    Node* fast = head;

    while (slow != NULL && fast != NULL && fast->getNext() != NULL) {
        slow = slow->getNext();
        fast = fast->getNext()->getNext();

        if (slow == fast) {

            slow = head;

            while (slow->getNext() != fast->getNext()) {
                slow = slow->getNext();
                fast = fast->getNext();
            }

            fast->setNext(NULL);
        }
    }

    return head;
}

void display(Node *head)
{

    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->getData();

        temp = temp->getNext();

        if (temp != NULL)
            cout << " -> ";
    }

    cout << "\n";
}

int main()
{

    Node *head = new Node(1);
    Node *second = new Node(2);
    Node *third = new Node(3);
    Node *forth = new Node(4);

    head->setNext(second);
    second->setNext(third);
    third->setNext(forth);
    forth->setNext(second);

    detect_loop(head) ? cout << "LOOP DETECTED\n" : cout << "NO LOOP DETECTED\n";

    head = loop_deletion(head);

    detect_loop(head) ? cout << "LOOP DETECTED\n" : cout << "NO LOOP DETECTED\n";
    

    return 0;
}