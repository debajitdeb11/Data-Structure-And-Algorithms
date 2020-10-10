// Find K-th Smallest Element in an Array
#include <iostream>
#include <algorithm>
using namespace std;

// Lomuto Partition
int partition(int arr[], int l, int r) {
    int pivot = arr[r];
    int i = l - 1;
    for (int j = l; j <= r- 1; j++) {
        if (arr[j] < pivot) {
            ++i;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i + 1], arr[r]);
    return (i + 1);
}

// Naive Method
void smallest_element(int arr[], int n) {
    sort(arr, arr+n);
    
    // Print the Smallest Element
    cout << arr[0] <<"\n";
}

// Using Lamuto Partition & Quick Sort Method
int kth_smallest_element(int arr[], int n, int k) {
    int l = 0, r = n - 1;

    while (l <= r) {
        int p = partition(arr, l, r);

        if (p == k - 1)
            return p;

        else if (p > k - 1)
            r = p - 1;

        else 
            l = p + 1;
    }

    return -1;
}

int main() {

    int arr[] = {5, 4,3,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << kth_smallest_element(arr,n,0) << "\n";

    return 0;
}