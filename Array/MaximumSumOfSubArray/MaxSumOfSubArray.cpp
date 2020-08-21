/*

    Maximum Sum of the sub array

    Time Complexitity: O(N ^ 2)

*/

#include <bits/stdc++.h>
using namespace std;

int max_sum(int *arr, int n)
{

    int max_sum = arr[0];

    for (int i = 0; i < n; i++)
    {
        int current_sum = 0;

        for (int j = i; j < n; j++)
        {

            current_sum = current_sum + arr[j];
            max_sum = max(current_sum, max_sum);
        }
    }

    return max_sum;
}

int main()
{

    int arr[] = {1, 2, 3, -1, -2};

    int n = sizeof(arr) / sizeof(int);

    cout << "Maximum Sum: " << max_sum(arr, n) << "\n";

    return 0;
}