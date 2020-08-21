/*  Optimized Solution to find Maximum Consecutive 1's 
    in a boolean array
*/

// Time Complexitity: O(N)

#include <bits/stdc++.h>
using namespace std;

int find_max_consecutive(vector<bool> &v)
{

    int n = v.size();

    int res = 0;
    int cur = 0;

    for (int i = 0; i < n; i++)
    {

        if (v[i] == 0)
            cur = 0;

        else
        {
            ++cur;
            res = max(cur, res);
        }
    }

    return res;
}

int main()
{
    vector<bool> v = {1, 1, 1, 0, 0, 1};

    cout << find_max_consecutive(v) << "\n";

    return 0;
}