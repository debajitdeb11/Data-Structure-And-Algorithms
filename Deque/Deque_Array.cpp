/* Array Implementation of Deque */

#include <bits/stdc++.h>
using namespace std;

class MyDeque
{
private:
    int capacity;
    int size;
    int *arr;

public:
    MyDeque(int capacity)
    {
        this->capacity = capacity;
        this->arr = new int[capacity];
        this->size = 0;
    }

    bool isFull() {
        return (size == capacity);
    }

    bool isEmpty() {
        return (size == 0);
    }

    void insertRear(int x) {
        if(isFull()) {
            cout << "Deque is Full\n";
            return;
        } else {
            arr[size++] = x;
        }
    }

    void deleteRear() {
        if(isEmpty()) {
            cout << "Deque is Already Empty\n";
            return;
        } else {
            size--;
        }
    }

    int getRear() {
        if (isEmpty()) {
            cout << "Deque is Already Empty\n";
            return -1;
        } else {
            return size - 1;
        }
    }

    void insertFront (int x) {
        if(isFull()) {
            cout << "Deque is Full\n";
            return;
        } else {
            for (int i = 0; i < size; i++) {
                arr[i+1] = arr[i];
            }
            arr[0] = x;
            size++;
        }
    }

    void deleteFront() {
        if (isEmpty()) {
            cout << "Deque is Already Empty\n";
            return;
        } else {
            for (int i = 0; i < size; i++) {
                arr[i] = arr[i + 1];
            }
            size--;
        }
    }

    int getFront() {
         if (isEmpty()) {
            cout << "Deque is Already Empty\n";
            return -1;
        } else {
            return 0;
        }
    }

};
