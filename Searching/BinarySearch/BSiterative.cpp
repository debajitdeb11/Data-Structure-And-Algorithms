#include <bits/stdc++.h>
using namespace std;

int getIndex(int arr[], int key, int first, int last)
{

    int mid = (last + first) / 2;

    while (first <= last)
    {
        mid = (last + first) / 2;

        if (arr[mid] == key)
            return mid;

        else if (key > arr[mid])
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

    int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    cout << getIndex(arr, 3, 0, 9) << "\n";

    return 0;
}