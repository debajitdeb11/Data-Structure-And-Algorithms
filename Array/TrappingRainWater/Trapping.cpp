/*
    Time Complexitity : O(n^2)
*/

#include <bits/stdc++.h>
using namespace std;

int maximum_trapping(vector<int> &v)
{

    int res = 0;
    int i, j;

    for (int i = 1; i < v.size() - 1; i++)
    {
        int lMax = v[i];

        for (int j = 0; j < i; j++)
        {
            lMax = max(lMax, v[j]);
        }

        int rMax = v[i];

        for (int j = i + 1; j < v.size(); j++)
        {
            rMax = max(rMax, v[j]);
        }

        res = res + (min(lMax, rMax) - v[i]);
    }

    return res;
}

int main()
{

    vector<int> *arr = new vector<int>();
    arr->push_back(3);
    arr->push_back(0);
    arr->push_back(1);
    arr->push_back(2);
    arr->push_back(5);

    int v = maximum_trapping(*arr);

    cout << v << "\n";

    return 0;
}