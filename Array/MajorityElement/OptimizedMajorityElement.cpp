/*  Optimized Solution to find the 
    majority of elements in an array

    Time Complexitity: O(N)
*/

#include <bits/stdc++.h>
using namespace std;

int majority_element(int arr[], int n)
{
    int count = 1;
    int res = 0;

    // Find a Candidate
    for (int i = 1; i < n; i++)
    {
        if (arr[res] == arr[i])
            count++;

        else
            count--;

        if (count == 0)
        {
            res = i;
            count = 1;
        }
    }

    // Check if the candidate is actually
    // a majority or not
    count = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[res] == arr[i])
            count++;
    }

    if (count <= n / 2)
        res = -1;

    return arr[res];
}

int main()
{

    int arr[] = {8, 7, 6, 8, 6, 6, 6, 6};

    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Majority element in the array is: "
         << majority_element(arr, n) << "\n";

    return 0;
}