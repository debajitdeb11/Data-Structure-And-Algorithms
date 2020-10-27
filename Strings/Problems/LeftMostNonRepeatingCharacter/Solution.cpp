/* 
    To find the Left Most Non-Repeating Character
    Time Complexity: O(N)
    Aux Space: O(1)
*/

#include <bits/stdc++.h>
using namespace std;

const int CHAR = 256;

int left_most_non_repeating_char(string arr){

    for (int i = 0; i < arr.length(); i++) {

        int flag = false;

        for (int j = 0; j < arr.length(); j++)
        {
            if (i != j && arr[i] == arr[j]) {
                flag = true;
                break;
            }
        }

        if (flag == false)
            return i;
    }
    return -1;
}

int main() {

    string str1 = "geeksforgeeks";
    string str2 = "debajitdeb";
    string str3 = "alex";

    cout << left_most_non_repeating_char(str1) << "\n";
    cout << left_most_non_repeating_char(str2) << "\n";
    cout << left_most_non_repeating_char(str3) << "\n";

    return 0;
}