#include <bits/stdc++.h>
using namespace std;

bool arePair(char o, char c)
{
    if (o == '(' && c == ')')
        return true;
    else if (o == '{' && c == '}')
        return true;
    else if (o == '[' && c == ']')
        return true;
    return false;
}

bool areParenthesesBalanced(string str)
{

    stack<char> s;

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '(' || str[i] == '{' || str[i] == '[')
        {
            s.push(str[i]);
        }
        else if (str[i] == ')' || str[i] == '}' || str[i] == ']')
        {
            if (s.empty() || !(arePair(s.top(), str[i])))
            {
                return false;
            }
            else
            {
                s.pop();
            }
        }
    }
    return s.empty() ? true : false;
}

int main()
{

    string str;
    cout << "Enter an Expression:";
    cin >> str;

    (areParenthesesBalanced(str)) ? cout << "Are balanced\n" : cout << "Not Balanced!\n";

    return 0;
}