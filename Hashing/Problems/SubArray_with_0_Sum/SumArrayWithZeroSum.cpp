// To check if sub-array exist with zero sum
/*
    Time Complexity: O(N)
    Aux Space: O(N)
*/

#include <bits/stdc++.h>
using namespace std;

/* Check if a sub-array exist with a sum equals to zero */
bool is_sum_exist(int arr[], int n) {

    unordered_set<int> s;

    // In this solution we a using a prefix sum
    int prefix_sum = 0;

    for (int i = 0; i < n; i++) {

        prefix_sum = prefix_sum + arr[i];

        /* If the prefix_sum is repeating
        then there exist a zero */
        if (s.find(prefix_sum) != s.end())
            return true;

        // Corner Case
        if (prefix_sum == 0)
            return true;

        s.insert(prefix_sum);
    }
    
    return false;
}

int main() {

    int arr[] = {1,4,13,-3, -10, 5};
    int n = sizeof(arr)/sizeof(int);

    (is_sum_exist(arr, n)) ? 
        cout << "Exist\n" :
        cout << "Not Exist\n";

    return 0;
}