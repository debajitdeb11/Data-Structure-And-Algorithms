#pragma once
#include <bits/stdc++.h>

class MyHash {
    private:
        int* arr;
        int capacity;
        int size;

    public:
        
        MyHash(int capacity);
        
        int hash(int key);
        bool insert(int key);
        bool search (int key);
        bool erase(int key);
};