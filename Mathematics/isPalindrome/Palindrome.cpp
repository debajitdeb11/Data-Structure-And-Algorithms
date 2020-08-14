#include <iostream>
using namespace std;

bool isPalindrome(int n)
{
    int temp = n;

    int rev = 0;

    while (n != 0)
    {
        int d = n % 10;

        rev = rev * 10 + d;

        n /= 10;
    }

    return (temp == rev) ? true : false;
}

int main()
{

    int n;

    cin >> n;

    (isPalindrome(n)) ? cout << "True\n" : cout << "False\n";

    return 0;
}