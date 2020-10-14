#include <iostream>
using namespace std;

// Cycle sort for Distinct Elements
void cycle_sort_dist(int arr[], int n) {
    
    for (int i = 0; i < n - 1; i++) {
        int item = arr[i];
        int pos = i;

        for (int j = i + 1; j < n; j++) {
            if (arr[j] < item) 
                pos ++;
        }

        swap(item, arr[pos]);

        while (pos != i) {
            pos = i;

            for (int j = i + i; j < n; j++)
                if (arr[j] < item)
                    pos++;

            swap(item, arr[pos]);
        }

    }

}

int main() {
    
    int arr[] = {4, 3, 1, 2};
    int n = sizeof(arr)/sizeof(arr[0]);

    printf("Before Sorting: ");

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    printf("\n");

    // Perform Quicksort
    cycle_sort_dist(arr, n);

    printf("After Sorting: ");

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    printf("\n");

    return 0;
}