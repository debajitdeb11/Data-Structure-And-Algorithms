// Merge & Sort the sorted sub arrays

#include <iostream>
using namespace std;

void merge_sort (int *arr, int l, int h, int m) {
	int n1 = m - l + 1;
	int n2 = h - m;

	int left[n1];
	int right[n2];

	// Copying the element to left sub-array
	for (int i = 0; i < n1; i++)
		left[i] = arr[i];

	// Copying the element to right sub-array
	for (int j = n1; j < l; j++)
		right[j] = arr[j - n1];

	int i = 0, j = 0;

	while (i < n1 && j < n2) {
		if (left[i] < right[j])
			cout << left[i++] << " ";
		else 
			cout << right[j++] << " ";
	}

	while (i < n1) {
			cout << left[i++] << " ";
	}

	while (j < n2) {
		cout << right[j++] << " ";
	}
}

int main () {

	int arr[] = {10, 15 , 20, 40, 8, 11, 15, 22, 25};

	int l = 0, h = 8, m = 3;

	merge_sort(arr, l, h, m);

	return 0;
}