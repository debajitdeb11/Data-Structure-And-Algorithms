// Longest SubArray with given sum
#include <bits/stdc++.h>
using namespace std;

int longest_subArray(int arr[], int n, int sum) {

    int res = 0;

    for (int i = 0; i < n; i++) {

        int current_sum = 0;

        for (int j = i; j < n; j++) {

            current_sum = current_sum + arr[j];

            if (current_sum == sum)
                res = max(res, j-i + 1);

        }

    }
    return res;
}

int main() {
    
    int arr[] = {5,8,-4,-4,9,-2,2};

    int n = sizeof(arr)/sizeof(arr[0]);

    int sum = 0;
    
    cout << longest_subArray(arr, n, sum) << "\n";

    return 0;
}
