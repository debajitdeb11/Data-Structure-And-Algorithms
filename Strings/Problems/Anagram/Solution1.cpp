/* 
Check if two strings contains the same cha
Method: 1 (Using Sorting)
*/

#include <bits/stdc++.h>
using namespace std;

bool is_anagram(string arr1, string arr2, int n1, int n2) {

    if (n1 != n2)
        return false;

    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end());

    return (arr1 == arr2);
}

int main() {

    string arr1 = "dog";
    string arr2 = "silent";

    int n1 = arr1.length();
    int n2 = arr2.length();

    string result =  is_anagram(arr1, arr2, n1, n2) ? "Same" : "Different";

    cout << result << "\n";

    return 0;
}
