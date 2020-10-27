/* 
    To find the Left Most Non-Repeating Character 
    (Optimized Solution Works for stream of Strings as well)
    * To find the soln in a single traversal
    -------------------------------------------------------------

    Time Complexity: O(N)
    Aux Space: O(1)
*/

#include <bits/stdc++.h>
using namespace std;

const int CHAR = 256;

int left_most_non_repeating_char(string &str) {
    
    // Initilized the 1st instance as -1
    int fi[CHAR];
    fill(fi, fi+CHAR, -1);

    for (int i = 0; i < str.length(); i++) {

        if (fi[str[i]] == -1)
            fi[str[i]] = i;

        // if the element appearing for the 2nd time, Mark it as -2
        else
            fi[str[i]] = -2;
    }

    int res = INT_MAX;

    for (int i = 0; i < CHAR; i++)
        if (fi[i] >= 0)
            res = min(res, fi[i]);

    return (res == INT_MAX) ? -1 : res;

}


int main() {

    string str1 = "geeksforgeeks";
    string str2 = "abcde";
    string str3 = "debajitdeb";

    cout << left_most_non_repeating_char(str1) << "\n";
    cout << left_most_non_repeating_char(str2) << "\n";
    cout << left_most_non_repeating_char(str3) << "\n";

    return 0;
}