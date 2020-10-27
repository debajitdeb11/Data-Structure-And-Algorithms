/*
    Optimized solution to Check if the string is rotated or not
    Time Complexity: O(N)
*/
#include <bits/stdc++.h>
using namespace std;


bool is_rotated(string &s1, string &s2) {

    if (s1.length() != s2.length()) return false;
    
    return ((s1 + s1).find(s2) != string::npos);
}

int main() {

    string s1 = "ABCD";
    string s2 = "CDA";

    cout << is_rotated(s1, s2);

    return 0;
}