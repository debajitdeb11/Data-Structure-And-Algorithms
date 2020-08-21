/*

    To find the maximum difference 
    between the elements in an array

        // Condition j > i

    
    Time Complexitity: O(n^2)
    Auxillary Space: O(1)

*/

#include <bits/stdc++.h>
using namespace std;

int max_diff(vector<int> &vec)
{

    int diff = INT_MIN;

    for (int i = 0; i < vec.size(); i++)
    {
        for (int j = i + 1; j < vec.size(); j++)
        {
            if (vec[j] - vec[i] > diff)
                diff = vec[j] - vec[i];
        }
    }

    return diff;
}

int main()
{

    vector<int> vec = {2, 3, 10, 6, 4, 8, 1};

    cout << max_diff(vec) << "\n";

    return 0;
}
