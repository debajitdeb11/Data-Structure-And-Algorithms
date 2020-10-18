/*
    Naive Solution for Longest Consecutive Sub-Sequence
*/

#include <bits/stdc++.h>
using namespace std;

int longest_consecutive_subsequence(int arr[], int n) {

    // Sorting
    sort(arr, arr+n);

    int max_length = 1;
    int current_length = 1;
    for (int i = 1; i < n; i++) {
        if (arr[i] - arr[i - 1] == 1)
            current_length++;
        else 
        {
          max_length = max(max_length, current_length);
          current_length = 1;
        }
    }
    
    max_length = max(max_length, current_length);
    return max_length;
}

int main() {

    int arr[] = {1,9,3,4,2,10,13};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << longest_consecutive_subsequence(arr, n) << "\n";

    return 0;
}