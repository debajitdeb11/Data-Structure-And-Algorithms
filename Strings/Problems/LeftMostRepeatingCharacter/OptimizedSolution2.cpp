/*
    To find the index of Left Most Repeating Character
    Here we traverse from the Right most Corner -> Left Most Corner

    Time Complexity: O(N)
    Aux Space: O(1)

*/
#include <bits/stdc++.h>
using namespace std;

const int CHAR = 128;

int index_of_leftmost_rep_char(string arr) {

    bool isVisited[CHAR] = {false};

    int res = -1;

    // Here we traverse from the Right most Corner -> Left Most Corner
    for (int i = arr.length() - 1; i >= 0; i--)
    {
        if(isVisited[arr[i]])
            res = i;
        else
            isVisited[arr[i]] = true;
    }
    
    return res;
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