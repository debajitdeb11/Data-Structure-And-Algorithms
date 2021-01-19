/* Job Sequence Problem */

/*
----------------------------------
\ Deadline \    4   1   1   1    |
----------------------------------
\ Profit   \    70  80  30  100  |
----------------------------------

O/P: 170
*/

#include <bits/stdc++.h>
using namespace std;

int compare(pair<int, int> p1, pair<int, int> p2)
{
    return (p1.second > p2.second);
}

int getMaxProfit(pair<int, int> arr[], int n)
{

    sort(arr, arr + n, compare);

    int maxDeadline = 0;

    int maxProfit = 0;

    int count = 0;

    for (int i = 1; i < n; i++)
        maxDeadline = max(arr[i].first, arr[i - 1].first);

    vector<bool> status(n, false);

    vector<int> profit(n, 0);

    for (int i = 0; i < n; i++)
    {

        for (int j = min(n, arr[i].first) - 1; j >= 0; j--)
        {

            if (!status[j])
            {
                profit[j] = arr[i].second;
                status[j] = true;
                break;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (status[i])
        {
            maxProfit += profit[i];
        }
    }

    return maxProfit;
}

int main()
{

    // pair<int, int> arr[] = {{4, 70}, {1, 80}, {1, 30}, {1, 100}};

    pair<int, int> arr1[] = {{2, 100}, {1, 50}, {2, 10}, {1, 20}, {3, 30}};

    // int n = sizeof(arr) / sizeof(arr[0]);

    int n1 = sizeof(arr1) / sizeof(arr1[0]);

    // cout << "Max Profit = " << getMaxProfit(arr, n) << "\n";

    cout << "Max Profit = " << getMaxProfit(arr1, n1) << "\n";

    return 0;
}