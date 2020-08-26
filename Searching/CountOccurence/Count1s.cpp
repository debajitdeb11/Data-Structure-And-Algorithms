#include <bits/stdc++.h>
using namespace std;

int firstOccurence(int arr[], int n, int key)
{

    int low = 0;
    int high = n - 1;

    while (low <= high)
    {

        int mid = (low + high) / 2;

        if (key < arr[mid])
            high = mid - 1;

        else if (key > arr[mid])
            low = mid + 1;

        else
        {
            if (mid == 0 || arr[mid] != arr[mid - 1])
                return mid;

            else
                high = mid - 1;
        }
    }
    return -1;
}

int lastOccurence(int arr[], int n, int key)
{
    int low = 0;
    int high = n - 1;

    while (low <= high)
    {

        int mid = (low + high) / 2;

        if (key < arr[mid])
            high = mid - 1;

        else if (key > arr[mid])
            low = mid + 1;

        else
        {
            if (mid == n - 1 || arr[mid] != arr[mid + 1])
                return mid;

            else
                low = mid + 1;
        }
    }

    return -1;
}

int count1s(int arr[], int n, int key)
{

    int first = firstOccurence(arr, n, key);

    if (first == -1)
        return 0;

    return (lastOccurence(arr, n, key) - first + 1);
}

int main()
{

    int arr[] = {0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1};
    int n = 11;

    cout << count1s(arr, n, 1);

    return 0;
}