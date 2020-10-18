# Open Addressing

## Types of Open Addressing Technique

__Linear Probing :__ Linearly search for next empty slots when there is a collision.

__Problem with Linear Probing__

`hash(key, i) = (h(key) + i) % m`

- Clustering

__Quadratic Probing (Secondary Clustering):__ 

`hash(key, i) = (h(key) + i * i) % m `

### Double Hashing

__Advantages :__   No Clustering

`hash(key, i) = (h1(key) + i * h2(key)) % m`

Algorithm for Double Hashing

```

DoubleHashInsert (key)
{
    if (table is full) 
        return error

    probe = h1(key), offset = h2(key)

    while(table[probe] is occupied)
        probe = (probe + offset) % m

    table[probe] = key
}

```

# Impplementation of Open Addressing

## C++

`Header`

```
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

```

`Implementation`


```
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
```


## Java

```
class MyHash {

    int [] arr;
    int capacity;
    int size;

    public MyHash(int capacity) {
        this.capacity = capacity;
        this.size = 0;
        arr = new int[capacity];
        Arrays.fill(arr, -1);
    }

    public int hash(int key) {
        return key % capacity;
    }

    public boolean search(int key) {
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

    public boolean insert(int key) {
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

    public boolean erase(int key) {

        int h = hash(key);
        int i = h;

        while (arr[i] != -1) {

            if (arr[i] == key) {
                arr[i] = -2;
                return true;
            }

            i = (i + 1) % capacity;

            if(i == h)
                return false;
        }
        return false;
    }
}

```