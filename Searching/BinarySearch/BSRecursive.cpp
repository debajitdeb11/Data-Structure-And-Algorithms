#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int k, int low, int high)
{

    if (low > high)
        return -1;

    int mid = (high + low) / 2;

    if (arr[mid] == k)
        return mid;

    else if (k > arr[mid])
        return binarySearch(arr, k, mid + 1, high);

    else
        return binarySearch(arr, k, low, mid - 1);
}

int main()
{

    int arr[] = {10, 20, 30, 40, 50, 80};
    int n = sizeof(arr) / sizeof(int);

    cout << binarySearch(arr, 50, 0, n - 1);

    return 0;
}