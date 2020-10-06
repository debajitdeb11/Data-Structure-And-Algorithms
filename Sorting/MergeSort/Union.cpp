// Union of two sorted Arrays
#include <bits/stdc++.h>
using namespace std;

// Naive Solution 
// Time Complexity: O ((m+n)log(m+n))
vector<int> unionArrays (int arr1[], int arr2[], int m, int n) {
    int temp[m + n];
    vector <int> v;

    for (int i = 0; i < m; i++)
        temp[i] = arr1[i];
    
    for (int j = 0; j < n; j++)
        temp[m + j] = arr2[j];

    sort(temp, temp + m + n);

    for (int i = 0; i < m + n; i++) {
        if (i == 0 || temp[i] != temp [i - 1])
            v.push_back(temp[i]);
    }
    return v;
}

// Efficient Solution using merge sort
// Time Complexity: O(m + n)
vector<int> union_efficient(int arr1[], int arr2[], int m, int n) {

    vector<int> v;

    int i = 0, j = 0;

    while (i < m && j < n) {

        if (i > 0 && arr1[i] == arr1[i - 1]) {
            i++;
            continue;
        }

        if (j > 0 && arr2[j] == arr2[j - 1]) {
            j++;
            continue;
        }

        if (arr1[i] < arr2[j]) {
            v.push_back(arr1[i++]);
        } else if (arr1[i] > arr2[j]) {
            v.push_back(arr2[j++]);
        } else {
            v.push_back(arr1[i]);
            i++; 
            j++;
        }
    }

    while (i < m) {
        if (i == 0 || arr1[i] != arr1[i - 1]) 
        v.push_back(arr1[j++]);
        else  i++; 
            
    }

    while (j < n) {
        if (j == 0 || arr2[j] != arr2[j - 1]) 
            v.push_back(arr2[j++]);
        else 
        { j++; }
                            
    }
    return v;
}

int main () {

    int arr1[] = {3, 8, 10};
    int arr2[] = {2, 8, 9, 10, 15};

    int m = sizeof(arr1)/sizeof(int);
    int n = sizeof(arr2)/sizeof(int);

    vector <int> res = union_efficient(arr1, arr2, m, n);

    cout << "Printing the values" << "\n";

    for (const auto i : res) {
        cout << i << " ";
    }

    cout << "\n";

    return 0;
}