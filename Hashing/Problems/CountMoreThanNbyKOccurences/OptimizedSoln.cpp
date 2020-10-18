// Count more than N/K Occurences in an array
// using Hashing
#include <bits/stdc++.h>
using namespace std;

vector<int> count_occurence(int arr[], int n, int k) {

    unordered_map<int, int> m;
    vector<int> res;

    for (int i = 0; i < n; i++) {
        m[arr[i]]++;
    }

    for (auto x : m) 
        if (x.second > n/k)
            res.push_back(x.first);

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