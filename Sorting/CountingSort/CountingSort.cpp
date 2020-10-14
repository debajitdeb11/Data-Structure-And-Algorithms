// Counting Sort

#include <iostream>
using namespace std;

// Naive Approach
void counting_sort(int arr[], int n, int k) {

    int count[k];

    // Fill the array with 0
    fill(count, count+k+1, 0);

    for (int i = 0; i < n; i++) {
        count[arr[i]]++;
    }

    int index = 0;
    for (int i = 0; i < k; i++) {
        for (int j = 0; j < count[i]; j++) {
            arr[index] = i;
            index++;
        }   
    }

}

int main() {

    int arr[] = {1, 4, 4, 1, 0, 1};
    int n = sizeof(arr)/sizeof(arr[0]);

    counting_sort(arr, n, 5);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    cout << "\n";

    return 0;
}