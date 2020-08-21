/*

Maximum Length of Even-Odd sub array

*/

#include <bits/stdc++.h>
using namespace std;

int maxLengthOfSubArray(vector<int> v)
{

    int maxLength = 1;

    int currentLength = 1;

    int n = v.size();

    for (int i = 0; i < n - 1; i++)
    {
        int j = i + 1;

        if (v[i] % 2 != 0 && v[j] % 2 != 0)
            currentLength = 1;

        else if (v[i] % 2 == 0 && v[j] % 2 == 0)
            currentLength = 1;

        else
        {
            ++currentLength;
            maxLength = max(maxLength, currentLength);
        }
    }

    return maxLength;
}

int main()
{
    vector<int> v = {1, 2, 3, 4};

    vector<int> v1 = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> v2 = {10, 12, 14, 7, 8};

    cout << "Max Length = " << maxLengthOfSubArray(v) << "\n";
    cout << "Max Length = " << maxLengthOfSubArray(v1) << "\n";
    cout << "Max Length = " << maxLengthOfSubArray(v2) << "\n";

    return 0;
}