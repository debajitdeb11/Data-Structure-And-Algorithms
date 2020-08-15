// Odd Occurence of a Number using XOR Operator

/*

    X ^ 0   =   X
    X ^ A   =   A ^ X
    X ^ X   =   0
    (X ^ Y) ^ Z  = X ^ (Y ^ Z)

*/

#include <iostream>
using namespace std;

int findOccurenceNumber(int n, int arr[])
{

    int res = 0;

    for (int i = 0; i < n; i++)
    {
        res = res ^ arr[i];
    }

    return res;
}

int main()
{

    int arr[] = {6, 1, 1, 3, 3};

    int n = sizeof(n) / sizeof(arr[0]);

    printf("%d\n", findOccurenceNumber(n, arr));

    return 0;
}