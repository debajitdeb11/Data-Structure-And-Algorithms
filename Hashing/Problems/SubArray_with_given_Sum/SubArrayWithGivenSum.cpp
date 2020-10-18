// To find a sub array with given sum
#include <bits/stdc++.h>
using namespace std;

bool is_sum_exist(int arr[], int n, int sum) {

    unordered_set<int> s;

    int prefix_sum = 0;

    for (int i = 0; i < n; i++) {

        prefix_sum = prefix_sum + arr[i];

        if (prefix_sum == sum)
            return true;

        if (s.find(prefix_sum - sum) != s.end())
            return true;

        s.insert(prefix_sum);

    }
    return false;
}

int main() {

    int arr[] = {5,8,6,13,3,-1};
    int n = sizeof(arr)/sizeof(arr[0]);

    int sum = 22;

    (is_sum_exist(arr, n, sum)) ? cout << "Sum Exist\n" : cout << "Sum Doesn't Exist\n";

    return 0;
}