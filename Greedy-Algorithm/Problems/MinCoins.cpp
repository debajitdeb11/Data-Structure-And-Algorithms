/* Get the minimum No. of Coins */

#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int get_min_coins(int coins[], int n, int amount)
{
    sort(coins, coins + n, greater<int>());

    int res = 0;

    for (int i = 0; i < n; i++)
    {
        if (coins[i] <= amount)
        {
            int c = floor(amount / coins[i]);

            res += c;

            amount -= c * coins[i];

            if (amount == 0)
                break;
        }
    }
    return res;
}

int main()
{

    int coins[4] = {1, 2, 5, 10};

    int n = sizeof(coins) / sizeof(coins[0]);

    cout << get_min_coins(coins, n, 57) << "\n";

    return 0;
}