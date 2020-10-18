// Optimized Solution for 
// Longest Consecutive Sub-Sequence using Hashing

#include <bits/stdc++.h>
using namespace std;

int longest_consecutive_subsequence(int arr[], int n) {

    int max_length = 0;
    unordered_set<int> s;

    for (int i = 0; i < n; i++)
        s.insert(arr[i]);

    for (int i = 0; i < n; i++) {
        if (s.find(arr[i] - 1) == s.end()) {
            int current_length = 1;
            while(s.find(arr[i] + current_length) != s.end())
                current_length++;

            max_length = max(max_length, current_length);
        }
    }

    return max_length;
}

int main() {

    int arr[] = {3,8,4,5,7};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << longest_consecutive_subsequence(arr, n) << "\n";

    int arr1[] = {1,9,3,4,2,10,13};
    int n1 = sizeof(arr1)/sizeof(arr[0]);

    cout << longest_consecutive_subsequence(arr1, n) << "\n";


    return 0;
}