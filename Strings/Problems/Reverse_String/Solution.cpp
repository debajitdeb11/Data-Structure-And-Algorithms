#include <bits/stdc++.h>
using namespace std;

void reverse(string &s, int start, int end) {

    int i = start;
    int j = end;

    while (i <= j)
    {
        swap(s[i], s[j]);
        i++;
        j--;
    }
    
} 

void reverse_string(string &str) {


    int start = 0;
    
    for (int end = 0; end < str.length(); end++)
    {
        if (str[end] == ' ') {
            reverse(str, start, end - 1);
            start = end + 1;
        }
    }
    
    reverse(str, start, str.length()-1);
    reverse(str,0, str.length() - 1);
}

int main() {

    string str = "i love you";

    cout << str << "\n";

    reverse_string(str);

    cout << str << "\n";

    return 0;
}