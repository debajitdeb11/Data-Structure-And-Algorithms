// Count more than N/K Occurences in an array
#include <bits/stdc++.h>
using namespace std;

vector<int> count_occurence(int arr[], int n, int k) {

    // Sorting
    sort(arr, arr+n);

    vector<int> res;

    int i = 1;
    int count = 1;


    while(i < n) {
        while (i < n && (arr[i] == arr[i-1])) {
            count++;
            i++;
        }

        if (count > n/k)
            res.push_back(arr[i - 1]);

        i++;
        count = 1;
    }
    return res;
}

int main() {

    int arr[] = {10,10,20,30,20,10,10};
    int n = sizeof(arr)/sizeof(arr[0]);

    vector<int> result = count_occurence(arr, n, 2);

    for (const auto x : result)
        cout << x << " ";

    cout << "\n";

    return 0;
}