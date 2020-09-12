#include <iostream>
using namespace std;


/* 	
	Time Complexity Analysis:
	Best Case: O(n) : When the array is already sorted
	Worst Case: O(n^2): When the array is reversed sorted
*/
	
void insertion_sort (int arr[], int n) {

	for (int i = 1; i < n; i++) {

		int key = arr[i];

		int j = i - 1;

		while(j >= 0 && arr[j] > key) {
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = key;
	} 
}

int main()
{

	int arr[] = { 4, 1, 3, 9, 7};

	int n = sizeof(arr)/sizeof(int);

	cout << "Before Sorting: \n";

	for (int i = 0; i < n; i++) 
		cout << arr[i] << " ";	

	cout << "\n";

	insertion_sort(arr, n);

	cout << "After Sorting: \n";
	for (int i = 0; i < n; i++) 
		cout << arr[i] << " ";	
	return 0;
}