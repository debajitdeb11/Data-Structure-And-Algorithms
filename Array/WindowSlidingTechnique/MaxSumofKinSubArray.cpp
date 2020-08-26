/*
Window Sliding Technique
Find the maximum consecutive sum of K in the Sub Array

Time Complexitity : O(N ^ 2)
*/

#include <iostream>
using namespace std;

int max_sum(int *arr, int n, int k)
{

    int max_sum = INT32_MIN;

    for (int i = 0; i + k - 1 < n; i++)
    {
        int cur_sum = 0;
        for (int j = 0; j < k; j++)
        {
            cur_sum += arr[i + j];
        }

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