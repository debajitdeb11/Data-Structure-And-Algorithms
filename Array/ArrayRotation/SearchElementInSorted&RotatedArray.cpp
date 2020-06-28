// Search an element in Sorted & Roatated Array

#include <iostream>
using namespace std;

// Standard Binary Search function
int binarySearch(int *arr, int first, int last, int key)
{

    if (last >= first)
    {

        int mid = first + (last - first) / 2;

        if (arr[mid] == key)
            return mid;

        if (arr[mid] > key)
            return binarySearch(arr, first, mid - 1, key);

        return binarySearch(arr, mid + 1, last, key);
    }

    return -1;
}

// Function to get the pivot
int findPivot(int *arr, int first, int last)
{

    if (last > first)
        return -1;

    if (last == first)
        return first;

    int mid = (last - first) / 2;

    if (mid < last && arr[mid] > arr[mid + 1])
        return mid;

    if (mid > first && arr[mid] < arr[mid - 1])
        return mid - 1;

    if (arr[first] >= arr[mid])
        return findPivot(arr, first, mid - 1);

    return findPivot(arr, mid + 1, last);
}

int pivotedBinarySearch(int *arr, int n, int key)
{

    int pivot = findPivot(arr, 0, n - 1);

    // If we didn't find a pivot,
    // then array is not rotated at all
    if (pivot == -1)
        return binarySearch(arr, 0, n - 1, key);

    // If we found a pivot, then first compare with pivot
    // and then search in two subarrays around pivot
    if (arr[pivot] == key)
        return pivot;

    if (arr[0] <= key)
        return binarySearch(arr, 0, pivot - 1, key);

    return binarySearch(arr, pivot + 1, n - 1, key);
}

int main()
{
    // Let us search 3 in below array
    int arr1[] = {5, 6, 7, 8, 9, 10, 1, 2, 3};
    int n = sizeof(arr1) / sizeof(arr1[0]);
    int key = 3;

    // Function calling
    cout << "Index of the element is : " << pivotedBinarySearch(arr1, n, key);
    return 0;
}