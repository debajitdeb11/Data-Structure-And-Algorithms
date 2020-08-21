/* Remove the duplicate Element from the array */

/*  Space Complexitity = O(n)
    Time Complexitity = O(n)
*/

#include <iostream>
using namespace std;

int removeDuplicates(int *arr, int n)
{
    int temp[n];

    temp[0] = arr[0];

    int res = 1;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] != temp[res - 1])
        {
            temp[res] = arr[i];
            res++;
        }
    }

    for (int i = 0; i < n; i++)
    {
        arr[i] = temp[i];
    }

    return res;
}

int main()
{
    int arr[] = {1, 2, 2, 2, 3};
    int n = sizeof(arr) / sizeof(int);

    cout << "Size = " << removeDuplicates(arr, n) << "\n";

    cout << "Printing of Array\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}