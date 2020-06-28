/*
# Iterative Solution of Binary Search
*/

#include <iostream>
using namespace std;

int binarySearch(int *arr, int first, int last, int key)
{

    while (last >= first)
    {

        int mid = first + (last - first) / 2;

        // if the mid element is the key
        if (arr[mid] == key)
        {
            return mid;
        }

        // if mid element is greater then key
        if (arr[mid] < key)
        {
            first = mid + 1;
        }

        else
        {
            last = mid - 1;
        }
    }
    return -1;
}

int main()
{

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 10, 11, 44, 55, 66, 78, 99, 1234};

    int size = sizeof(arr) / sizeof(arr[0]);

    int key;

    cin >> key;

    cout << binarySearch(arr, 0, size - 1, key);

    return 0;
}