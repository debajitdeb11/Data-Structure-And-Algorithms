/*
    To check if the number is Palindrome
    using recursion
*/

#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s, int i, int n)
{

    if (s[i] != s[(n - 1) - i])
        return false;

    if (i >= n / 2)
        return true;

    return (s, i + 1, n);
}

int main()
{

    string s;

    getline(cin, s);

    int n = s.length();

    (isPalindrome(s, 0, n)) ? cout << "Palindrome\n" : cout << "Not Palindrome\n";

    return 0;
}