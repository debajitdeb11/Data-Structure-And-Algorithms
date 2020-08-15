/*

Brute Force Approach:

Program to all the prime number less then or equals to n

*/

#include <bits/stdc++.h>
using namespace std;

void printPrime(int n);

int main()
{
    int n;

    cin >> n;

    printPrime(n);

    return 0;
}

void printPrime(int n)
{

    for (int i = 2; i <= n; i++)
    {
        int count = 0;
        for (int j = 1; j <= i; j++)
        {

            if (i % j == 0)
                count++;
        }

        if (count == 2)
            cout << i << " ";
    }
}