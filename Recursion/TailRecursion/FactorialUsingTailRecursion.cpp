/* Factorial of a number using Tail Recursion */
#include <iostream>
using namespace std;

int fact(int n, int k)
{
    if (n == 0 || n == 1)
        return k;

    return fact(n - 1, n * k);
}

int main()
{

    cout << fact(5, 1) << "\n";

    return 0;
}