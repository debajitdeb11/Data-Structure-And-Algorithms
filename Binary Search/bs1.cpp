// Recursive Program to search an element in an array
// using Binary Search

/*

# Time Complexitity = O(n/2) + c
# Space Complextity = O(Log n)

*/

#include <iostream>
using namespace std;

int binarySearch(int *arr, int first, int last, int key)
{

    if (last >= first)
    {
        int mid = first + (last - first) / 2;

        if (arr[mid] == key)
        {
            return mid;
        }

        if (arr[mid] > key)
        {
            return binarySearch(arr, first, mid - 1, key);
        }

        return binarySearch(arr, mid + 1, last, key);
    }
    return -1;
}

int main()
{

    int arr[] = {1, 2, 4, 6, 7, 11, 45, 67, 90};

    int size = sizeof(arr) / sizeof(arr[0]);

    int key = 50;

    cout << "Key = " << key << " "
         << "Position = " << binarySearch(arr, 0, size - 1, key);

    return 0;
}