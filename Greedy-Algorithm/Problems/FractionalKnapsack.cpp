/* Fractional Knapsack Problem */

#include <bits/stdc++.h>
using namespace std;

bool compare(pair<int, int> p1, pair<int, int> p2)
{
    return (p1.first < p2.first);
}

int getMaxWeight(pair<int, int> arr[], int n, int capacity)
{
    int maxWeight = 0;

    sort(arr, arr + n, compare);

    for (int i = 0; i < n; i++)
    {
        if (capacity < arr[i].first)
        {
            maxWeight += ((arr[i].second) / (arr[i].first)) * capacity;
            break;
        }

        maxWeight += arr[i].second;

        capacity = capacity - arr[i].first;
    }
    return maxWeight;
}

int main()
{

    pair<int, int> arr[] = {{30, 120}, {20, 100}, {10, 60}};

    int n = sizeof(arr) / sizeof(arr[0]);

    cout << getMaxWeight(arr, n, 50) << "\n";

    return 0;
}