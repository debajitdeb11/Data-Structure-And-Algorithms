#include <bits/stdc++.h>
using namespace std;

int tribonacci(int n)
{

    if (n == 0 || n == 1)
        return 0;

    if (n == 2)
        return 1;

    return tribonacci(n - 3) + tribonacci(n - 2) + tribonacci(n - 1);
}

int main()
{

    cout << tribonacci(7) << "\n";

    return 0;
}