// Segregate 0's & 1's using Haore's Algorithm
#include <iostream>
using namespace std;

void segregate(int arr[], int n) {
    int i = -1;
    int j = n;

    while (true) {
        do {
            i++;
        } while(arr[i] == 0);

        do {
            j--;
        } while(arr[j] == 1);

        if (i >= j) return;
        swap(arr[i], arr[j]);
    }

}

int main() {

    int arr[] = {0,1,0,1,1,1,0,0,0,1,1,1,1,0};
    int n = sizeof(arr)/sizeof(int);

    segregate(arr, n);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    cout << "\n";

    return 0;
}