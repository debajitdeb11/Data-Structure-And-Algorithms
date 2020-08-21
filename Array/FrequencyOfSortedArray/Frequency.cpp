/* Frequency of elements in a Sorted Array */

#include <bits/stdc++.h>
using namespace std;

void calculate_frequency(vector<int> &vect)
{
    int i, j, k;
    int count = 1;
    for (i = 0; i < vect.size(); i = i + k)
    {
        for (j = i + 1; j < vect.size(); j++)
        {

            if (vect[i] != vect[j])
            {
                break;
            }
            k = ++count;
        }
        cout << "Frequency of " << vect[i] << " ==> " << count << "\n";
        count = 1;
    }
}

int main()
{

    vector<int> vect = {1, 1, 1, 2, 2, 2, 3, 3, 3};

    calculate_frequency(vect);

    return 0;
}