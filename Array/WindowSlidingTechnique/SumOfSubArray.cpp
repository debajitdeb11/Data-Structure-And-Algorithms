/*
    Given an unsorted array of non-negative integer.
    Find if there is a subarray with given sum
*/

#include <iostream>
using namespace std;

bool isSumExist(int arr[], int n, int sum)
{

    if (sum == 0)
        return false;

    int head = 0;
    int tail = 0;

    int cur_sum = arr[head];

    while (tail <= n)
    {

        if (cur_sum == sum)
            return true;

        else if (cur_sum < sum)
            cur_sum += arr[++head];

        else
            cur_sum -= arr[tail++];
    }

    return false;
}

int main()
{

    int arr[] = {1, 4, 20, 3, 10, 5};
    int n = sizeof(arr) / sizeof(int);

    int sum;

    cin >> sum;

    (isSumExist(arr, n, sum)) ? cout << "Sum Exist\n" : cout << "Sum doesn't exist\n";

    return 0;
}