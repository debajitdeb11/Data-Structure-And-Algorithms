package OpenAddressing.Java.Implementation;

import java.util.Arrays;

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