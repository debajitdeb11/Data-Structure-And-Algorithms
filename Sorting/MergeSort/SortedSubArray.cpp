#include <iostream>
using namespace std;

void merge(int arr[], int l, int m, int h) {

	int n1 = m - l + 1;
	int n2 = h - m;

	int left[n1], right[n2];

	for (int i = 0; i < n1; i++) 
		left[i] = arr[l + i];

	for (int j = 0; j < n2; j++)
		right[j] = arr[m + 1 + j];

	int i = 0, j = 0, k = i;

	while (i < n1 && j < n2) {
		if (left[i] < right[j])
			cout << left[i++] << " ";
		else
			cout << right[j++] << " ";
	}

}

int main () {

	return 0;
}