/* Search an element in Sorted and Rotated Array using binary search*/

#include <bits/stdc++.h>
using namespace std;

int searchElement(int arr[], int key, int n)
{

    int low = 0;
    int high = n - 1;

    while (low <= high)
    {

        int mid = (low + high) / 2;

        if (key == arr[mid])
            return mid;

        else if (arr[low] < arr[mid])
        {
            if (key >= arr[low] && key < arr[mid])
                high = mid - 1;

            else
                low = mid + 1;
        }

        else
        {
            if (key > arr[mid] && key <= arr[high])
                low = mid + 1;

            else
                high = mid - 1;
        }
    }

    return -1;
}

int main()
{

    int arr[] = {100, 200, 500, 1000, 10, 20};
    int n = sizeof(arr) / sizeof(int);

    int key;
    cin >> key;

    for (auto i : arr)
        cout << i << " ";

    cout << "\n";

    cout << searchElement(arr, key, n) << "\n";

    return 0;
}