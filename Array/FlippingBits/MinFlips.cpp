#include <iostream>
using namespace std;

void min_flips(bool *arr, int n)
{

    for (int i = 1; i < n; i++)
    {
        if (arr[i] != arr[i - 1])
            if (arr[i] != arr[0])
                cout << "From " << i << " to ";
            else
                cout << (i - 1) << "\n";
    }

    if (arr[n - 1] != arr[0])
        cout << n - 1 << "\n";
}

int main()
{

    bool arr[] = {0, 1, 1, 1, 0, 0};
    int n = sizeof(arr) / sizeof(bool);

    min_flips(arr, n);
}