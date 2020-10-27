/* Naive Pattern Searching Algorithm */

#include <bits/stdc++.h>
using namespace std;

// Search the pattern and return the indexes of the result
void naive_pattern_search (string &text, string &pattern) {

    int m = pattern.length();
    int n = text.length();

    for (int i = 0; i <= n - m; i++) {

        int j;
        int count = 0;
        for (int j = 0; j < m; j++) {

            if (pattern[j] != text[i + j])
                break;
            
            count++;
        }

        if (count == m)
            cout << i << "\n";

    }
}

int main() {

    string text = "debajit";
    string pattern = "jit";

    naive_pattern_search(text, pattern);

    return 0;
}