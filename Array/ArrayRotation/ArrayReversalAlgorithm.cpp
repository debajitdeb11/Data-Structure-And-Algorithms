// Rotation of Array using Array Reversal Algorithm

#include <iostream>
using namespace std;

void arrayReversal(int *Arr, int start, int end)
{
    while (start < end)
    {
        int temp = Arr[start];
        Arr[start] = Arr[end];
        Arr[end] = temp;
        start++;
        end--;
    }
}

void Rotate(int *Arr, int n, int d)
{
    if (d == 0)
    {
        return;
    }

    arrayReversal(Arr, 0, d - 1);
    arrayReversal(Arr, d, n - 1);
    arrayReversal(Arr, 0, n - 1);
}

void displayArray(int *Arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << Arr[i] << " ";
    }

    cout << "\n";
}

int main()
{
    int n, d;

    cin >> n >> d;

    int Arr[n], val;

    for (int i = 0; i < n; i++)
    {
        cin >> val;
        Arr[i] = val;
    }

    // In case d is greater than n
    d = d % n;

    Rotate(Arr, n, d);

    displayArray(Arr, n);

    return 0;
}

// Time Complexitity = O(n)