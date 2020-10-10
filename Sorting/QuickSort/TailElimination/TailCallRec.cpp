// Tail Call Recursion in Quick Sort to reducce the space Complexity
// of the Program

#include <iostream>
using namespace std;

int lamuto_partition(int arr[], int l, int h) {
    int pivot = arr[h];
    int i = l - 1;

    for(int j = l; j <= h-1; j++) {
        if(arr[j] < pivot){
            ++i;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i+1], arr[h]);
    return (i+1);
}

void qSort(int arr[], int l, int h) {
    
    // Label
    Begin:

    if (l < h) {
        int p = lamuto_partition(arr, l, h);
        qSort(arr, l, p - 1);
        // qSort(arr, p+1, h);

        // Goto Statement
        l = p + 1;
        goto Begin;
    }
}

int main() {

    int arr[] = {9, 3, 6, 5, 1, 1, 2, 5, 1, 0};
    int n = sizeof(arr)/sizeof(arr[0]);

    int h = n - 1;
    int l = 0;

    cout << "Before Sorting: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    cout <<"\n";

    // Perform Sorting
    qSort(arr, l, h);

    cout << "After Sorting: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    cout << "\n";

    return 0;
}