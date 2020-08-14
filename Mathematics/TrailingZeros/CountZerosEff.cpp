// Efficient algorithm to count Trailing Zeros

#include <bits/stdc++.h>
using namespace std;

int countTrailingZero(int n)
{
    int res = 0;

    for (int i = 5; i <= n; i = i * 5)
    {
        res = res + n / i;
    }

    return res;
}

int main()
{

    int n;
    cin >> n;

    cout << countTrailingZero(n) << "\n";

    return 0;
}
