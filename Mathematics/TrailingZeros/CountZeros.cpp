#include <bits/stdc++.h>
using namespace std;

unsigned long factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;

    return n * factorial(n - 1);
}

int countZeroes(int n)
{

    int count = 0;

    unsigned long temp = factorial(n);

    cout << temp << "\n";

    while (temp % 10 == 0)
    {
        count++;
        temp = temp / 10;
    }

    return count;
}

int main()
{

    int n;
    cin >> n;
    cout << countZeroes(n) << "\n";

    return 0;
}