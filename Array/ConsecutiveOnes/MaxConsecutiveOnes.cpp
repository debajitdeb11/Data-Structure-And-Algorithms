/* Program to find out maximum consecutive 1's in an array */
// Time Complexitity: O(N ^ 2)

#include <bits/stdc++.h>
using namespace std;

int max_consecutive_ones(vector<int> &v)
{

    int max_res = 0;

    int i, j;

    for (i = 0; i < v.size(); i++)
    {
        int cur_max = 0;

        for (j = i; j < v.size(); j++)
        {
            if (v[j] == 1)
                ++cur_max;

            else
                break;
        }

        max_res = max(max_res, cur_max);
    }

    return max_res;
}

int main()
{

    vector<int> v = {0, 1, 1, 1, 1};
    vector<int> v2 = {0, 0, 0, 0};

    cout << max_consecutive_ones(v) << "\n";

    return 0;
}