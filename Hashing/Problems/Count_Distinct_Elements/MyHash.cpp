/*
    Count Distinct Element in an Array using Hashing

    Time Complexity: O(n)
    Aux Space: O(n)

*/
#include <bits/stdc++.h>
using namespace std;

class MyHash {

    private:
        int capacity;
        int size;
        int* arr;

    public:
        MyHash(int capacity) {
            this->capacity = capacity;
            this->size = 0;
            this->arr = new int[capacity];
            fill(arr, arr + capacity, -1);
        }

        int hash(int key) {
            return key % capacity;
        }

        bool search(int key) {
            int h = hash(key);
            int i = h;

            while(arr[i] != -1) {
                if (arr[i] == key)
                    return true;
                
                i = (i + 1) % capacity;

                if (i == h)
                    return false;
            }
            return false;
        }

        bool insert(int key) {

            if (size == capacity)
                return false;

            int i = hash(key);

            while(arr[i] != key && arr[i] != -1 && arr[i] != -2)
                i = (i + 1) % capacity;

            if (arr[i] == key)
                return false;

            else {
                arr[i] = key;
                size++;
                return true;
            }

        }

        bool erase(int key) {
            int h = hash(key);
            int i = h;

            while(arr[i] != -1) {
                if (arr[i] == key) {
                    arr[i] = -2;
                    return true;
                }

                i = (i + 1) % capacity;

                if (i == h)
                    return false;
            }
            return false;
        }
};

int main() {

    MyHash h(7);

    int count = 0;
    int arr[] = {15, 12, 13, 12, 13, 13, 18};
    

    for (auto i : arr) {
        // Counting elements
        if (h.insert(i) == true) {
            count++;
        }
    }

    cout << "No of distinct element = " << count << "\n";

    return 0;
}