// Longest subarray with equal no of 0's & 1's

#include <bits/stdc++.h>
using namespace std;

int longest_subarray(int arr[], int n) {

    int res = 0;

    for (int i = 0; i < n; i++)
    {
        int count0 = 0, count1 = 0;

        for (int j = i; j < n; j++) {

            if (arr[j] == 0)
                count0++;
            else
                count1++;
            if (count0 == count1 )
                res = max(res, j-i+1);

        }
    }

    return res;    

}   

int main() {

    int arr[] = {1,0,1,1,1,0,0};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << longest_subarray(arr, n) <<"\n";

    return 0;
}