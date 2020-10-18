// Count distinct element in an array

#include <bits/stdc++.h>
using namespace std;

vector<int> count_distinct_elements(int arr[], int n, int k) {

    unordered_set<int> s;
    vector<int> res;

    int start = 0;
    int end = k;
    
    while(true) {
        
        for (int i = start; i < end; i++ ) {
            s.insert(arr[i]);
        }
        res.push_back(s.size());
        s.clear();
        start++;
        end++;

        if (end > n) {
            break;
        }

    }
    
    return res; 
}

int main() {

    int arr[] = {10,20,20,10,30,40,10};
    int n = sizeof(arr)/sizeof(arr[0]);

    vector<int> result = count_distinct_elements(arr,n,4); 

    for (const auto x : result)
        cout << x << " ";

    cout <<"\n";

    return 0;
}