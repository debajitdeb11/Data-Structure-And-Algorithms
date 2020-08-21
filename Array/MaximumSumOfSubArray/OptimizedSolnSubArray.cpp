/*

    Optimized Method to find the sum of sub array
    // Kadane's Algorithm

    Time Complexitity: O(N)
    Auxiliary Space: O(1)

*/

#include <bits/stdc++.h>
using namespace std;

int max_sum(int *arr, int n)
{

    int max_sum = arr[0];
    int res = arr[0];

    for (int i = 1; i < n; i++)
    {
        max_sum = max(max_sum + arr[i], arr[i]);

        res = max(max_sum, res);
    }

    return res;
}

int main()
{
    int arr[] = {-5, 1, -2, 3, -1, 2, -2};

    int n = sizeof(arr) / sizeof(int);

    int arr1[] = {1, 2, 3};

    int m = sizeof(arr1) / sizeof(int);

    cout << max_sum(arr, n) << "\n";
    cout << max_sum(arr1, m) << "\n";

    return 0;
}