#include <bits/stdc++.h>
using namespace std;

class MyHash {

    public:
        int BUCKET;
        list<int>* table;

        MyHash(int b) {
            this->BUCKET = b;
            this->table = new list<int>[b];
        } 

        // To insert new values
        void insert (int key);

        // To remove values
        void remove(int key);

        // To search values
        bool search(int key);

};

void MyHash::insert(int key) {

    // Perform Hashing
    int i = key % BUCKET;
    table[i].push_back(key);
}

void MyHash::remove(int key) {

    int i = key % BUCKET;
    table[i].remove(key);
}

bool MyHash::search(int key) {
    int i = key % BUCKET;

    for (auto x : table[i])
        if (x == key)
            return true;

    return false;
}

int main() {

    MyHash hash(7);

    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    
    for (auto i : arr)
    {
        hash.insert(i);
    }

    cout << hash.search(10) << "\n";
    hash.remove(10);
    cout << hash.search(10) << "\n";
    
    return 0;
}