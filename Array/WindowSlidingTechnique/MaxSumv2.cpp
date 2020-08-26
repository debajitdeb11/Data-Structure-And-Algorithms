/*
Window Sliding Technique
Find the maximum consecutive sum of K in the Sub Array

Time Complexitity : O(N)
*/

#include <iostream>
using namespace std;

int max_sum(int *arr, int n, int k)
{

    int max_sum = 0;
    int cur_sum = 0;

    for (int i = 0; i < k; i++)
        cur_sum += arr[i];

    max_sum = cur_sum;

    for (int i = k; i < n; i++)
    {
        cur_sum += (arr[i] - arr[i - k]);

        max_sum = max(max_sum, cur_sum);
    }

    return max_sum;
}

int main()
{

    int k;
    cin >> k;

    int arr[] = {1, 8, 30, -5, 20, 7};
    int n = sizeof(arr) / sizeof(int);

    cout << max_sum(arr, n, k);

    return 0;
}