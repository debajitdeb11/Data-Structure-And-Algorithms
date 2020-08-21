/* Maximum Profit on Stocks */

#include <bits/stdc++.h>
using namespace std;

int max_profit(vector<int> &v)
{

    int profit = 0;

    for (int i = 1; i < v.size(); i++)
        if (v[i] > v[i - 1])
            profit += (v[i] - v[i - 1]);

    return profit;
}

int main()
{

    vector<int> v = {1, 5, 3, 8, 12};

    cout << max_profit(v) << "\n";

    return 0;
}