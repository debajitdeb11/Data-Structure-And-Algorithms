// Longest Common Span with Same Sum in Two Binary Arrays
// Optimized Solution

#include <bits/stdc++.h>
using namespace std;

int longest_common_span(int arr1[], int arr2[] ,int n) {

    /*
        The idea is to subtract the first array with
        the second array and create a new aux array

        > If both the elements have the same element
            then they will differ by zero so we put zero
            else we will put result. And we need to find
            the largest sub-array with sum equals to zero
    */

   unordered_map<int, int> m;

   for (int i = 0; i < n; i++)
        arr1[i] = arr1[i] - arr2[i];

    int prefix_sum = 0;
    int result = 0;

    for (int i = 0; i < n; i++) {

        prefix_sum = prefix_sum + arr1[i];

        if (prefix_sum == 0)
            result = i + 1;

        if (m.find(prefix_sum) == m.end())
            m.insert({prefix_sum, i});

        if (m.find(prefix_sum) != m.end())
            result = max(result, i - m[prefix_sum]);
    }
    return result;
}

int main() {
    int arr1[] = {0,1,0,0,0,0};
    int arr2[] = {1,0,1,0,0,1};

    // Both the arrays have same size
    int n = sizeof(arr1)/sizeof(int);

    cout << longest_common_span(arr1, arr2, n) << "\n";
    return 0;
}