/*  Optimized Solution to find a peek element in an array using
    Binary Search.

    Time Complexity: O(log N)

*/

#include <bits/stdc++.h>
using namespace std;

int getPeek(int arr[], int n)
{
    int low = 0;
    int high = n - 1;

    while (low <= high)
    {

        int mid = (low + high) / 2;

        if ((mid == 0 || arr[mid - 1] <= arr[mid]) && (mid == n - 1 || arr[mid + 1] <= arr[mid]))
            return arr[mid];

        else if (mid > 0 && arr[mid] < arr[mid + 1])
            low = mid + 1;

        else
            high = mid - 1;
    }

    return -1;
}

int main()
{
    int arr[] = {5, 20, 40, 30, 20, 50, 60};

    cout << getPeek(arr, 7);

    return 0;
}