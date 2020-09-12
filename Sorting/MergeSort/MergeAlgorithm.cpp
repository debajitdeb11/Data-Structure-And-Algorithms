// #include <bits/stdc++.h>
// using namespace std;

// void merge(int a[], int b[], int m, int n) {

// 	int i = 0, j = 0;

// 	while(i < m && j < n) {
// 		(a[i] < b[i]) ? cout << a[i++] << " " : cout  << b[j++] << " ";
// 	}

// 	while(i < m) cout << a[i++] << " ";
// 	while(j < n) cout << b[j++] << " ";

// 	cout << "\n";

// }

// int * merge_sort(int arr[], int l, int r) {

// 	// If the array contains atleast two element
// 	if (r > l) {

// 		// Middle element of the array
// 		int m = l + (r - l)/2;

// 		int a[] = merge_sort(arr, l, m);
// 		int b[] = merge_sort(arr, m+1, l);
// 		merge(a, b, m, m - l);

// 	}

// 	return NULL; 

// }

// int main() {

// 	int arr[] = {30, 10, 18, 15, 2, 6, 9, 45};
// 	int r = sizeof(arr)/sizeof(int);

// 	int* l = merge_sort(arr, 0, r - 1);

// 	return 0;
// }