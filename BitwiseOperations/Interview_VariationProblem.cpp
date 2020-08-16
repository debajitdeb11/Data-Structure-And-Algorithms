/*

Problem Statement: Given an array of n number that has values
                in range [i ... n+1]. Every no. appears excatly
                once. Hence one no. is missing. Find the 
                missing number. 

*/
#include <iostream>
using namespace std;

int missingNumber(int arr[], int n)
{

    int res = 0;

    for (int i = 1; i <= 5; i++)
        res = res ^ i;

    for (int i = 0; i < n; i++)
    {
        res = res ^ arr[i];
    }

    return res;
}

int main()
{

    int arr[] = {1, 2, 3, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << missingNumber(arr, n) << "\n";

    return 0;
}
