#include <iostream>
using namespace std;

bool isSumExist(int arr[], int n, int k, int sum)
{

    int cur_sum = 0;

    for (int i = 0; i < k; i++)
        cur_sum += arr[i];

    if (cur_sum == sum)
        return true;

    else
    {
        for (int i = k; i < n; i++)
        {
            cur_sum += (arr[i] - arr[i - k]);

            if (cur_sum == sum)
                return true;
        }
    }

    return false;
}

int main()
{

    int arr[] = {1, 8, 30, -5, 20, 7};

    int n = sizeof(arr) / sizeof(int);

    int k, sum;

    cin >> k >> sum;

    (isSumExist(arr, n, k, sum)) ? cout << "Sum Exist\n" : cout << "Sum doesn't exist\n";

    return 0;
}