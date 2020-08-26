// Program to find the equilibrium point
#include <iostream>
using namespace std;

int getEquilibriumPoint(int arr[], int n)
{

    int sum = 0;

    // To compute total sum
    for (int i = 0; i < n; i++)
        sum += arr[i];

    int l_sum = 0;

    // To compute left sum
    for (int i = 0; i < n; i++)
    {

        sum -= arr[i]; // sum becomes the right sum

        if (l_sum == sum)
        {
            return i;
        }

        l_sum += arr[i];
    }

    // if there is no equilibrium point
    return -1;
}

int main()
{

    int arr[] = {-7, 1, 5, 2, -4, 3, 0};
    int arr_size = sizeof(arr) / sizeof(arr[0]);

    int arr1[] = {5, 3, 4, 5, 3};
    int n = sizeof(arr1) / sizeof(arr[0]);

    cout << getEquilibriumPoint(arr, arr_size) << "\n";
    cout << getEquilibriumPoint(arr1, n) << "\n";

    return 0;
}