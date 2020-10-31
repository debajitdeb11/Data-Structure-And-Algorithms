/* Stock Span Problem: Efficient Solution */
#include <bits/stdc++.h>
using namespace std;

void print_span(int arr[], int n) {

    stack<int> s;
    s.push(0);

    cout << "1 ";

    for (int i = 1; i < n; i++) {

        while(!s.empty() && arr[s.top()] <= arr[i])
            s.pop();

        int span = s.empty() ? (i+1) : i - s.top();

        cout << span << " ";

        s.push(i);

    }

}

int main() {

    int arr[] = {10, 20, 30, 40};
    int n = sizeof(arr)/sizeof(arr[0]);

    print_span(arr, n);

    return 0;
}