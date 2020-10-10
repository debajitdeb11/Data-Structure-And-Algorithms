#include <bits/stdc++.h>
using namespace std;

int count_inversion (int arr[], int n) {
    int count = 0;

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j])
                count++;
        }
    }
    return count;
}

int main() {

    int arr[] = {2,5,8,11,3,6,9,13};
    int n = sizeof(arr)/sizeof(int);

    cout << count_inversion(arr, n);

    return 0;
}