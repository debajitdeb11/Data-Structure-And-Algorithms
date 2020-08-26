// Bonacci Series using Window Sliding Technique

#include <bits/stdc++.h>
using namespace std;

void nBonacci(int n, int m)
{

    int arr[m];

    for (int i = 0; i < m; i++)
        arr[i] = 0;

    arr[n - 1] = 1;
    arr[n] = 1;

    // Uses Sliding window
    for (int i = n + 1; i < m; i++)
        arr[i] = 2 * arr[i - 1] - arr[i - n - 1];

    //printing result
    for (int i = 0; i < m; i++)
        cout << arr[i] << " ";
}

int main()
{

    nBonacci(3, 20);

    return 0;
}