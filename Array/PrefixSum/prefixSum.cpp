// Compute the sum of the element of the element
// of an array from a range from (l,m)

// Time Complexitity: O(1)
// Pre-Computation Complexitity: O(N)
// Auxilary Space: O(1)

#include <bits/stdc++.h>
using namespace std;

int compute_sum(vector<int> arr, int n, int l, int m)
{

    int sum = arr[0];
    for (int i = 1; i < n; i++)
    {
        sum = sum + arr[i];
        arr[i] = sum;
    }

    // Total sum of elements at this range is
    return (l == 0) ? arr[m] : (arr[m] - arr[l - 1]);
}

int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = v.size();

    cout << compute_sum(v, n, 8, 9) << "\n";

    vector<int> v2 = {2, 8, 3, 9, 6, 5, 4};
    int z = v2.size();

    cout << compute_sum(v2, z, 0, 2) << "\n";
    cout << compute_sum(v2, z, 1, 3) << "\n";
    cout << compute_sum(v2, z, 2, 6) << "\n";

    return 0;
}