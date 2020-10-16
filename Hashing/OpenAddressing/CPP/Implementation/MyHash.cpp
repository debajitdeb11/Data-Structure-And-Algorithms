#include "MyHash.h"

MyHash::MyHash(int capacity) {
    this->capacity = capacity;
    this->size = 0;
    this->arr = new int[capacity];
    std::fill(arr, arr+capacity, -1);
}

int MyHash::hash(int key) {
    return key % capacity;
}

bool MyHash::insert(int key) {
    if (size == capacity)
        return false;

    int i = hash(key);

    while(arr[i] != -1 && arr[i] != -2 && arr[i] != key)
        i = (i + 1) % capacity;

    if (arr[i] == key)
        return false;

    else {
        arr[i] = key;
        size++;
        return true;
    }
}

bool MyHash::search(int key) {
    int h = hash(key);
    int i = h;

    while (arr[i] != key) {
    
        if (arr[i] == key)
            return true;

        i = (i + 1) % capacity;

        if (i == h)
            return false;
    }
    return false;
}

bool MyHash::erase(int key) {
    int h = hash(key);
    int i = h;

    while (arr[i] != -1) {
        if(arr[i] == key) {
            arr[i] = -2;
            return true;
        }

        i = (i + 1) % capacity;

        if (i == h)
            return false;
    }
    return false;
}