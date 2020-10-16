package Chaining.java;

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