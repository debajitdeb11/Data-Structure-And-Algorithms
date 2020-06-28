// Program to rotate an array using temporary array

#include <iostream>
using namespace std;

void rotateArray(int arr[], int n, int d)
{

    int temp[d];

    // copy the values to temp array
    for (int i = 0; i < d; i++)
    {
        temp[i] = arr[i];
    }

    // shift the array
    for (int i = 0; i < n - d; i++)
    {
        arr[i] = arr[i + d];
    }

    // copy the temp array to end of new array
    for (int i = 0; i < d; i++)
    {
        arr[n - d + i] = temp[i];
    }
}

void print(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int main()
{

    int t, n, d, val;

    cin >> t;

    while (t--)
    {
        cin >> n >> d;

        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> val;
            arr[i] = val;
        }

        rotateArray(arr, n, d);

        print(arr, n);
    }
    return 0;
}