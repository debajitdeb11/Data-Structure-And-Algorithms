// Quick Sort using Lamuto Partition

#include <iostream>
using namespace std;

// Lamudo Partition
int lamuto_partition(int arr[], int l, int h) {
    int pivot = arr[h];
    int i = l - 1;

    for (int j = l; j <= h - 1; j++ ) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i + 1], arr[h]);
    return i+1;
}

void qSort(int arr[], int l, int h) {

    if (l < h) {
        int p = lamuto_partition(arr, l, h);
        qSort(arr, l, p - 1);
        qSort(arr, p+1, h);   
    }
}

int main() {

    int arr[] = {8, 4, 7, 9, 3, 10, 5};
    int n = sizeof(arr)/sizeof(int);
    int l = 0;
    int h = n - 1;

    cout << "BEFORE SORTING: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    cout << "\n";

    qSort(arr, l, h);

    cout << "AFTER SORTING: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    
    cout << "\n";

    return 0;
}