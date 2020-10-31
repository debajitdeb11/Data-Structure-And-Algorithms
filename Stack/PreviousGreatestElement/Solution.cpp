/* Given an array of distinct integer, find the closest(position-wise) greatest
    on left of every element. If there is no greatest element on left, then print -1 */

#include <bits/stdc++.h>
using namespace std;

void previous_greatest_element(int arr[], int n) {

    cout << -1 << " ";

    for (int i = 1; i < n; i++)
    {
        for (int j = i - 1; j >= 0; j--)
        {
            if (arr[j] > arr[i])
            {
                cout << arr[j] << " ";
                break;
            }

            if (j == 0)
                cout << -1 << " ";

        }
    }

}

int main() {

    int arr[] = {15, 10, 18, 12, 4, 6, 2, 8};
    int n = sizeof(arr)/sizeof(arr[0]);

    previous_greatest_element(arr, n);

    return 0;
}