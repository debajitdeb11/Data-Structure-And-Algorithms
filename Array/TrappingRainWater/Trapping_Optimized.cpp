/* Optimized solution for Trapping Water */
// Time Complexitity: O(N)
// Space Complexitiy: O(N)

#include <bits/stdc++.h>
using namespace std;

int maximum_trapping(vector<int> &v)
{

    int res = 0;
    int lMax[v.size()], rMax[v.size()];

    // Max_left
    lMax[0] = v[0];
    for (int i = 1; i < v.size(); i++)
        lMax[i] = max(v[i], lMax[i - 1]);

    // Right Max
    rMax[v.size() - 1] = v[v.size() - 1];
    for (int i = v.size() - 1; i >= 0; i--)
        rMax[i] = max(v[i], rMax[i + 1]);

    for (int i = 1; i < v.size(); i++)
        res = res + (min(lMax[i], rMax[i]) - v[i]);

    return res;
}

int main()
{

    vector<int> v = {3, 0, 1, 2, 5};

    cout << maximum_trapping(v) << "\n";

    return 0;
}