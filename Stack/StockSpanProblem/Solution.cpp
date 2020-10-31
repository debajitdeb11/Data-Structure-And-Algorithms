/* Stock Span Problem */
#include <bits/stdc++.h>
using namespace std;

void print_span(int arr[], int n) {

    for(int i = 0; i < n; i++) {
        int span = 1;

        for (int j = i - 1; j >= 0 && arr[j] <= arr[i]; j--)
        {
            span++;
        }
        
        cout << span << " ";
    }
}

int main() {

    int arr[] = {10, 20, 30, 40};
    int n = sizeof(arr)/sizeof(arr[0]);

    print_span(arr, n);

    return 0;
}