/* Power set using Bitwise Operator */

#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main()
{

    string s;

    getline(cin, s);

    int n = s.length();

    int pow_size = pow(2, n);

    for (int counter = 0; counter < pow_size; counter++)
    {

        for (int j = 0; j < n; j++)
        {

            if ((counter & (1 << j)) != 0)
            {
                cout << s[j];
            }
        }
        cout << "\n";
    }

    return 0;
}