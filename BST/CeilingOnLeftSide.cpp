/* Ceiling on the Left Side */

#include <iostream>
#include <set>
using namespace std;

// Naive Solution
void printCeiling(int arr[], int n)
{
    printf("%d ", -1);

    for (int i = 1; i < n; i++)
    {
        int diff = INT16_MAX;

        for (int j = 0; j < i; j++)
            if (arr[j] >= arr[i])
                diff = min(diff, arr[j] - arr[i]);

        if (diff == INT16_MAX)
            cout << -1 << " ";
        else
            cout << (arr[i] + diff) << " ";
    }
}

// Efficient solution
void printCeling_eff(int arr[], int n)
{
    cout << -1 << " ";

    set<int> s;

    s.insert(arr[0]);

    for (int i = 1; i < n; i++)
    {
        if (s.lower_bound(arr[i]) != s.end())
        {
            cout << *(s.lower_bound(arr[i])) << " ";
        }
        else
        {
            cout << -1 << " ";
        }

        s.insert(arr[i]);
    }
}

int main()
{
    int arr[] = {2, 8, 30, 15, 20, 12};
    int n = sizeof(arr) / sizeof(arr[0]);
    // printCeiling(arr, n);
    // cout << endl;

    printCeling_eff(arr, n);

    return 0;
}