// Program to demostrate the working of Junggling Algorithm

#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
        return a;

    else
        return (b, a % b);
}

void LeftRotate(int *arr, int n, int d)
{

    // if d >= n
    d = d % n;

    for (int i = 0; i < gcd(n, d); i++)
    {
        int temp = arr[i];
        int j = i;

        while (1)
        {

            int k = j + d;

            if (k >= n)
                k = k - n;

            // To break the while loop
            if (k == i)
                break;

            arr[j] = arr[k];

            j = k;
        }
        arr[j] = temp;
    }
}

void displayArray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << "\n";
}

int main()
{

    int n, d, val;

    cin >> n >> d;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> val;
        arr[i] = val;
    }

    displayArray(arr, n);

    LeftRotate(arr, n, d);

    displayArray(arr, n);

    return 0;
}