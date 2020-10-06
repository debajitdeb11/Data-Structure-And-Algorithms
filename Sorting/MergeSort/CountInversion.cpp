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

    int arr[] = {2 , 4, 1, 3, 5 };
    int n = sizeof(arr)/sizeof(int);

    cout << count_inversion(arr, n);

    return 0;
}