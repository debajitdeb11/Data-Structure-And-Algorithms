# Chaining using LinkedList

Chaining is used to avoid collision during hashing

## C++

```
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

```

## JAVA

```
import java.util.ArrayList;
import java.util.LinkedList;

class MyHash {

    int BUCKET;
    ArrayList<LinkedList <Integer>> table;

    MyHash(int b) {
        this.BUCKET = b;
        this.table = new ArrayList<LinkedList<Integer>>();

        for (int i = 0; i < b; i++)
            table.add(new LinkedList<Integer>());
    }

    // To perform Insertion
    void insert(int key) {
        int i = key % BUCKET;
        table.get(i).add(key);
    }

    // To perform deletion
    void remove(int key) {
        int i = key % BUCKET;
        table.get(i).remove((Integer) key);
    }

    // To perform search
    boolean search(int key) {
        int i = key % BUCKET;
        return table.get(i).contains((Integer) key);
    }

    public static void main(String[] args) {
        MyHash hash = new MyHash(7);
        
        int [] arr = {1,2,3,4,5,6,7,8,9,10};
        
        for (int i : arr) {
            hash.insert(i);
        }

        System.out.println(hash.search(10));
        hash.remove(10);
        System.out.println(hash.search(10));
    }

}

```