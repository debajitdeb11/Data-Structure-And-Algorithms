#include <iostream>
using namespace std;

void rotate(int *arr, int n, int d)
{

    int temp;
    int i, j;

    for (i = 0; i < d; i++)
    {
        temp = arr[0];
        for (j = 0; j < n - 1; j++)
        {
            arr[j] = arr[j + 1];
        }
        arr[j] = temp;
    }
}

void display(int *arr, int n)
{

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << "\n";
}

int main()
{

    int n, d;

    cin >> n >> d;

    int arr[n], val;

    for (int i = 0; i < n; i++)
    {
        cin >> val;
        arr[i] = val;
    }

    // In case d is greater than n
    d = d % n;

    rotate(arr, n, d);
    display(arr, n);

    return 0;
}