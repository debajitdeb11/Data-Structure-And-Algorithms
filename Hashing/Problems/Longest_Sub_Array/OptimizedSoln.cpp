// Longest sub array with given sum
#include <bits/stdc++.h>
using namespace std;

int longest_subarray(int arr[], int n, int sum) {

    unordered_map<int, int> m;

    int pre_sum = 0, res = 0;

    for (int i = 0; i < n; i++) {

        pre_sum = pre_sum + arr[i];

        if (pre_sum == sum)
            res = i + 1;

        if (m.find(pre_sum) == m.end())
            m.insert({pre_sum, i});

        if (m.find(pre_sum - sum) != m.end())
            res = max(res, i - m[pre_sum-sum]);

    }

    return res;

}


int main() {

    int arr[] = {8,3,1,5,-6,6,2,2};

    int n = sizeof(arr)/sizeof(arr[0]);

    int result = longest_subarray(arr, n, 4);

    cout << result << "\n";

    return 0;
}