// Array Implementation of Binary Tree
#include <bits/stdc++.h>
using namespace std;

char tree[10];

int root(char key) {

    // if the 0-th index is already occupied
    // then root is already exist
    if (tree[0] != '\0') {
        cout << "Tree already had a root\n";
    }

    // else insert the key at 0-th index
    else
    {
        tree[0] = key;
    }
    return 0;
}

int set_left(char key, int parent) {

    // if the parent index is empty
    if (tree[parent] == '\0') {
        cout << "Can't set child at "
            << (parent * 2) + 1
            << ", No parent found\n";
    }
    else
        tree[(parent * 2)  + 1] = key;

    return 0;
}

int set_right(char key, int parent) {

    if (tree[parent] == '\0') {
        cout << "Child can't be set at "
            << (parent * 2) + 2
            << ", No parent found\n";
    }
    else
        tree[(parent * 2) + 2] = key;

    return 0;
}

void print_tree() {
    for (int i = 0; i < 10; i++)
    {
        if (tree[i] != '\0') {
            cout << tree[i] << " ";
        }
        else {
            cout << "- ";
        }
    }
    cout << "\n";
}

int main() {

    root('A');  // A---------
    set_left('B', 0); // AB--------
    set_right('C', 0); // ABC-------
    set_left('D', 1);   // ABCD------
    set_right('E', 1);  // ABCDE-----

    print_tree();


    return 0;
}