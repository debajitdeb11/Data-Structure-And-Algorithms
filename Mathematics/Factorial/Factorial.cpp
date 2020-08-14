#include <bits/stdc++.h>
using namespace std;

unsigned long fact(int n)
{
    unsigned long fact = 1;

    for (int i = 2; i <= n; i++)
        fact = fact * i;

    return fact;
}

int main()
{

    int n;
    scanf("%d", &n);

    printf("%ld\n", fact(n));
    return 0;
}
