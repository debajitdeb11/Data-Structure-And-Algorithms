/*
    Index of Left Most Repeating Character
*/

#include <bits/stdc++.h>
using namespace std;

int index_of_leftmost_rep_char(string arr) {

    int pos = INT_MAX;

    sort(arr.begin(), arr.end());

    for (int i = 1; i < arr.length(); i++)
        if(arr[i] == arr[i - 1])
            pos = min(pos, i - 1);

    return (pos == INT_MAX) ? -1 : pos;

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