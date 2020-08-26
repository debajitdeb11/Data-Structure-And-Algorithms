// TODO: Incomplete Program

/*

Maximum Frequency of an element in given range

*/

#include <bits/stdc++.h>
using namespace std;

int max_freq(int L[], int R[], int n)
{

    int arr[1000];

    memset(arr, 0, sizeof(arr));

    for (int i = 0; i < n; i++)
    {
        arr[L[i]]++;
        arr[R[i] + 1]--;
    }

    int m_sum = arr[0], ind;

    for (int i = 1; i < max; i++)
    {
        /* code */
    }
}

int main()
{

    return 0;
}