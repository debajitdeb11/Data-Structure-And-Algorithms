/* Given an array of distinct integer, find the closest(position-wise) greatest
    on left of every element. If there is no greatest element on left, then print -1 */

#include <bits/stdc++.h>
using namespace std;

void previous_greatest_element(int arr[], int n) {

    stack<int> s;

    cout << -1 << " ";

    s.push(arr[0]);

    for (int i = 1; i < n; i++) {

        while(!s.empty() && s.top() <= arr[i])
            s.pop();

        if (s.empty()) cout << -1 << " ";
        else cout << s.top() << " ";
        
        s.push(arr[i]);

    }

}

int main() {

    int arr[] = {15, 10, 18, 12, 4, 6, 2, 8};
    int n = sizeof(arr)/sizeof(arr[0]);

    previous_greatest_element(arr, n);

    return 0;
}