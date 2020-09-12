// Merge two arrays & sort them in ascending order (Naive Solution)

/* Time Complexity: O ((m+n)log(m+n)) */

#include <bits/stdc++.h>
using namespace std;

void merge_and_sort(int a[], int b[], int m, int n) {
	int temp[m+n];

	for (int i = 0; i < m; i++) temp[i] = a[i];
	for (int j = 0; j < n; j++) temp[j+m] = b[j];

	cout << "Before Sorting: \n";

	for (int i = 0; i < m+n; i++) cout << temp[i] << " ";

	cout << "\n";

	sort(temp, (temp + m + n));


	cout << "After Sorting: \n";

	for (int i = 0; i < m+n; i++) cout << temp[i] << " ";

	cout << "\n";


}

int main() {

	int a[] = {10, 15, 20, 40};
	int b[] = {5, 6, 6, 10, 15};

	int m = sizeof(a)/sizeof(int);
	int n = sizeof(b)/sizeof(int);

	merge_and_sort(a, b, m, n);

	return 0;
}