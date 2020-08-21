/* To check if the array is sorted or not */
#include <iostream>
using namespace std;

bool isSorted(int *arr, int n)
{

    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i + 1] < arr[i])
            return false;
    }

    return true;
}

int main()
{

    int *arr = new int[10];
    int *arr2 = new int[10];
    int *arr3 = new int[5];

    arr3[0] = 8;
    arr3[1] = 9;
    arr3[2] = 10;

    for (int i = 0; i < 10; i++)
        arr[i] = i;

    for (int i = 9; i >= 0; i--)
        arr2[9 - i] = i;

    (isSorted(arr, 10)) ? cout << "Sorted!\n" : cout << "Not Sorted!\n";
    (isSorted(arr2, 10)) ? cout << "Sorted!\n" : cout << "Not Sorted!\n";
    (isSorted(arr3, 3)) ? cout << "Sorted!\n" : cout << "Not Sorted!\n";

    return 0;
}