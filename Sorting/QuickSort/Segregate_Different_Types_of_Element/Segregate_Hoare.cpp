/*
    Segregate using Hoare Partition
*/
#include <iostream>
using namespace std;

void segregate_hoare(int arr[], int n) {
    int i = -1, j = n;

    while (true) {

        do {
            i++;
        } while(arr[i] < 0);

        do {
            j--;
        } while(arr[j] > 0);

        if (i >= j) return;

        swap(arr[i], arr[j]);

    }

}

int main() {

    int arr[] = {15, -3, -2, 16};
    int n = sizeof(arr)/sizeof(int);

    segregate_hoare(arr, n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << "\n";

    return 0;
}