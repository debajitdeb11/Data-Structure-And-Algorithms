// Segregate (-)ve & (+)ve elements
#include <iostream>
using namespace std;

void segregate(int arr[], int n) {

    int temp[n];
    int i = 0;

    // Store -ve elements
    for (int j = 0; j < n; j++)
        if(arr[j] < 0) {
            temp[i++] = arr[j];
        }

    // Store +ve elements
    for (int j = 0; j < n; j++)
        if(arr[j] >= 0) {
            temp[i++] = arr[j];
        }

    for (int i = 0; i < n; i++)
        arr[i] = temp[i];

}



int main() {

    int arr[] = {15, -3, -2, 16};
    int n = sizeof(arr)/sizeof(int);

    segregate(arr, n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << "\n";

    return 0;
}