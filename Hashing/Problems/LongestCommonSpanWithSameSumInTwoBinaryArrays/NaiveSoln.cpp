// Longest Common Span with same sum 
// in two Binary Arrays

#include <bits/stdc++.h>
using namespace std;

int longest_common_span(int arr1[], int arr2[], int n) {

    int res = 0;

    for (int i = 0; i < n; i++) {
        int sum1 = 0, sum2 = 0;
        for (int j = i; j < n; j++) {
            sum1 = sum1 + arr1[j];
            sum2 = sum2 + arr2[j];

            if (sum1 == sum2)
                res = max(res, j - i + 1);

        }   
    }

    return res;
}

int main() {

    int arr1[] = {0,1,0,0,0,0};
    int arr2[] = {1,0,1,0,0,1};

    // Both the arrays have same size
    int n = sizeof(arr1)/sizeof(int);

    cout << longest_common_span(arr1, arr2, n) << "\n";

    return 0;
}