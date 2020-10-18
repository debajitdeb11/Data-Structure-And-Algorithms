// To check if the pair exist with given sum in an array

/*
    Time Complexity: O(n)
    Aux Space: O(n)
*/

#include <bits/stdc++.h>
using namespace std;

bool isPair(int arr[], int n, int sum) {

    unordered_set<int> s;

    for (int i = 0; i < n; i++){
        if (s.find(sum - arr[i]) != s.end())
            return true;
        s.insert(arr[i]);
    }

    return false;
}
        

int main() {

    int arr[] = {3,2,8,15,-8};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum = 17;

    (isPair(arr, n, sum)) ? cout << "Exist\n" : cout << "Not Exist\n";


    int arr1[] = {11, 5, 6};
    int n1 = sizeof(arr)/sizeof(arr[0]);
    int sum1 = 10;

    (isPair(arr1, n1, sum1)) ? cout << "Exist\n" : cout << "Not Exist\n";

    return 0;
}