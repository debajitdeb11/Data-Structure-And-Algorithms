/*
    To find the index of Left Most Repeating Character
*/
#include <bits/stdc++.h>
using namespace std;

const int CHAR = 128;

int index_of_leftmost_rep_char(string arr) {

    int count[CHAR] = {0};

    for (int i = 0; i < arr.length(); i++)
        count[arr[i]]++;

    for (int i = 0; i < arr.length(); i++)
        if (count[arr[i]] > 1)
            return i;

    return -1;
}

int main() {

    string str1 = "geeksforgeeks";
    string str2 = "abbcc";
    string str3 = "abcd";
    string str4 = "abcdefghh";

    cout << index_of_leftmost_rep_char(str1) << "\n";
    cout << index_of_leftmost_rep_char(str2) << "\n";
    cout << index_of_leftmost_rep_char(str3) << "\n";
    cout << index_of_leftmost_rep_char(str4) << "\n";

    return 0;
}