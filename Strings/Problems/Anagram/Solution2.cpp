/* 
Check if two strings contains the same cha
Method: 2 (Using Array method)
*/

#include <bits/stdc++.h>
using namespace std;

#define CHAR 256

bool is_anagram(string arr1, string arr2, int n1, int n2) {

    if (n1 != n2)
        return false;

    int count1[CHAR] = {0};
    
    for (int i = 0; i < n1; i++){
        count1[arr1[i] - 'a']++;
        count1[arr2[i] - 'a']--;
    }


    for (int i = 0; i < CHAR; i++)
        if (count1[i] != 0)
            return false;

    return true;
}


int main() {

    string arr1 = "listen";
    string arr2 = "silent";

    int n1 = arr1.length();
    int n2 = arr2.length();

    string result =  is_anagram(arr1, arr2, n1, n2) ? "Same" : "Different";

    cout << result << "\n";

    return 0;
}