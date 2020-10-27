/* If the patter are distinct 

TODO: Incomplete

*/
#include <bits/stdc++.h>
using namespace std;

void pattern_search(string &text, string &pattern) {

    int m = pattern.length();
    int n = text.length();

    for (int i = 0; i <= m - n; )
    {
        int count = 0, j;

        for (j = 0; j < m; j++)
        {
            if (text[i+j] != pattern[j])
                break;

            count++;

        }

        if (count == m)
            cout << i << " ";
        

        if (j == 0)
            i++;

        else 
            i = i + j;
    }
}

int main() {

    string text = "geeksforgeeks";
    string pattern = "geek";

    pattern_search(text, pattern);

    return 0;
}