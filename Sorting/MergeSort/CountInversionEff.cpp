// Efficient Solution for Counting Inversion

#include <bits/stdc++.h>
using namespace std;

int countAndMerge(int arr[], int l, int m, int r) {
    int n1 = m - l + 1;
    int n2 = r - m;
    int left[n1], right[n2];
    int count = 0, i = 0, j = 0, k = 0;

    while (i < n1 && j < n2) {
        if(left[i] <= right[j]) 
            arr[k++] = left[i++];
        else {
            arr[k++] = right[j++];
            count += (n1 - i);
        }
    }

    while (i < n1) {arr[k++] = left[i++];}
    while (j < n2) {arr[k++] = right[j++];}

    return count;
}

int count_inversion(int arr[],int l, int r) {

    int count = 0;

    int m = l + (r-l)/2;

    if (l < r) {
        count = count + count_inversion(arr, l, m);
        count = count + count_inversion(arr, m + 1, r);
        count = count + countAndMerge(arr, l, m, r);
    }
    return count;
}

int main () {

    int arr[] = {2,5,8,11,3,6,9,13};
    int r = sizeof(arr)/sizeof(int);
    int l = 0;

    cout << count_inversion(arr, l, r) <<"\n";

    return 0;
}