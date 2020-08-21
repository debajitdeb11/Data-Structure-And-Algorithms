/*

    Optimized method to find the maximum difference 
    between the elements in an array

        // Condition j > i

    
    Time Complexitity: O(n)
    Auxillary Space: O(1)

*/
#include <bits/stdc++.h>
using namespace std;

int max_diff(vector<int> &vect)
{

    int diff = vect[1] - vect[0];
    int min_val = vect[0];

    for (int i = 1; i < vect.size(); i++)
    {

        diff = max(diff, vect[i] - min_val);
        min_val = min(min_val, vect[i]);
    }

    return diff;
}

int main()
{

    vector<int> *vect = new vector<int>();

    vect->push_back(2);
    vect->push_back(3);
    vect->push_back(10);
    vect->push_back(6);
    vect->push_back(4);
    vect->push_back(8);
    vect->push_back(1);

    cout << max_diff(*vect) << "\n";

    return 0;
}