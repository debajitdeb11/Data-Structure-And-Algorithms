/* 
    To find the Left Most Non-Repeating Character
    Time Complexity: O(N)
    Aux Space: O(1)
*/

#include <bits/stdc++.h>
using namespace std;

const int CHAR = 256;

int left_most_non_repeating_char(string &str) {
    
    int count[CHAR] = {0};

    for (int i = 0; i < str.length(); i++)
    {
        count[str[i]]++;
    }
    
    for (int i = 0; i < str.length(); i++)
    {
        if (count[str[i]] == 1)
            return i;
    }
    
    return -1;
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