// Segregate odd-even using Hoare's Algorithm
#include <iostream>
#include <algorithm>
using namespace std;

void segregate(int arr[], int n) {
    int i = -1;
    int j = n;

    while(true) {

        do {
            i++;
        } while(arr[i] % 2 != 0);
        
        do {
            j--;
        } while(arr[j] % 2 == 0);

        if (i >= j) return;
        swap(arr[i], arr[j]);
    }
}

int main() {

    int arr[] = {1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(int);

    segregate(arr, n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}