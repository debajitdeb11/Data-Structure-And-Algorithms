// Intersection of two sorted arrays
#include <bits/stdc++.h>
using namespace std;

// Naive Approach
// Time Complexity: O(m*n) , Space Complexity: O(1)
void intersection (int *arr1, int *arr2, int m, int n) {

    for (int i = 0; i < m; i++) {

        if (i > 0 && arr1[i-1] == arr1[i]) {
            continue;
        }

        for (int j = 0; j < n; j++) {
            if (arr1[i] == arr2[j]) cout << arr1[i] << " ";
        }
    }
     cout << "\n";
}


// Efficient Solution using mergeSort
// Time Complexity: O(n + m)
// Aux Space: O(1)
vector <int> intersection_mergesort(int arr1[], int arr2[], int m, int n) {
    int i = 0, j = 0;

    vector <int> v;

    while (i < m && j < n) {
        // To avoid duplicates
        if (i > 0 && arr1[i-1] == arr1[i])
          {  i++; 
          continue;
          }

        if (arr1[i] < arr2[j])
            i++;
        else if (arr1[i] > arr2[j]) 
            j++;
        else {
            v.push_back(arr1[i]);
            i++;
            j++;
        }
    }

    return v;
}

int main () {

    int arr1[] = {1,2,3,4,5};
    int arr2[] = {3,4,5,6,7};

    int m = sizeof(arr1) / sizeof(int);
    int n = sizeof(arr2) / sizeof(int);

    vector <int> res = intersection_mergesort(arr1, arr2, m, n);

    // int arr1[] = {1,2,3,4,5};
    // int arr2[] = {3,4,5,6,7};

    // int m = sizeof(arr1) / sizeof(int);
    // int n = sizeof(arr2) / sizeof(int);

    for (const auto i : res) {
        cout << i << " ";
    }

    return 0;
}