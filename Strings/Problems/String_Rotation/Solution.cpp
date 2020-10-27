/*
    Check if the string is rotated or not
    Time Complexity: O(N * N)
*/
#include <bits/stdc++.h>
using namespace std;


bool is_rotated(string &s1, string &s2) {

    for (int i = 0; i < s2.length(); i++) {

        if (s1 == s2)
            return true;

        char temp = s2[0];
        for (int j = 1; j < s2.length(); j++)
            s2[j-1] = s2[j];
        s2[s2.length()-1] = temp;
    }

    return false;

}

int main() {

    string s1 = "ABCD";
    string s2 = "CDA";

    cout << is_rotated(s1, s2);

    return 0;
}