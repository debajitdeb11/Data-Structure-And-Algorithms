// TODO: Incomplete

// /* Finding the next greatest element in an array */

// #include <bits/stdc++.h>
// using namespace std;

// vector<int> next_greatest_element(int arr[], int n) {

//     stack<int> s;
//     vector<int> v;

//     s.push(arr[n-1]);
//     v.push_back(-1);

//     for (int i = n -2; i > -1; i--) 
//         {
//             while(!s.empty() &&  s.top() <= arr[i])
//             {
//                 s.pop();
//             }

//             int next_gtr = (s.empty()) ? -1 : (s.top());
//             v.push_back(next_gtr);

//         }

//         reverse(v.begin(), v.end());
//     return v;
// } 

// int main() {

//     int arr[] = {5,15,10,8,6,12,9,18};
//     int s = sizeof(arr)/sizeof(arr[0]);

//     vector<int> res = next_greatest_element(arr, s);

//     for (auto i  : res)
//         cout << i << " ";

//     return 0;
// }