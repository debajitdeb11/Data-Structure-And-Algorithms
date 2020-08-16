/* Find Two Odd Appearing Number in the array */
// TIP: To find the right most set bit
//      N & ~(N-1)  ---> gives the right most set bit

#include <iostream>
using namespace std;

void OddOccuringNumber(int arr[], int n)
{

    int XOR = 0, res1 = 0, res2 = 0;

    // To find XOR of the array
    for (int i = 0; i < n; i++)
        XOR = XOR ^ arr[i];

    int sn = XOR & ~(XOR - 1);

    // To divide the array into two groups
    for (int i = 0; i < n; i++)
    {

        if ((sn & arr[i]) != 0)
            res1 = res1 ^ arr[i];

        else
            res2 = res2 ^ arr[i];
    }

    // printing the values of res1 & res2
    cout << res1 << "\t" << res2 << "\n";
}

int main()
{

    int arr[] = {1, 1, 2, 3, 4, 4, 5, 5};
    int n = sizeof(arr) / sizeof(int);

    OddOccuringNumber(arr, n);

    return 0;
}
