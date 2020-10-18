/*
    Given a boolean array
    We need to find the longest sub-array
    with no.of 0's equals to no.of 1's
*/

#include <bits/stdc++.h>
using namespace std;

int longest_subarray(int arr[], int n) {


    // We are going to replace 0's with -1
    for (int i = 0; i< n; i++)
        if (arr[i] == 0)
            arr[i] = -1;


    unordered_map<int, int> m;
    int prefix_sum = 0;
    int result = 0;

    for (int i = 0; i < n; i++) {

        prefix_sum = prefix_sum + arr[i];

        if (prefix_sum == 0)
            result = i + 1;

        if (m.find(prefix_sum) == m.end())
            m.insert({prefix_sum,i});

        if(m.find(prefix_sum) != m.end())
            result = max(result,i - m[prefix_sum]);

    }
    return result;
}

int main() {

    int arr[] = {1,0,1,1,1,0,0};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << longest_subarray(arr, n) << "\n";

    return 0;
}