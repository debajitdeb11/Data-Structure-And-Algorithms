/*
    _____
    
    | 3 |
    | 2 |
    | 1 |
    | 1 |
    | 2 |
    | 3 |
    _____
*/

#include <iostream>
using namespace std;

void fun(int n)
{
    if (n == 0)
        return;

    cout << n << "\n";
    fun(n - 1);
    cout << n << "\n";
}

int main()
{

    fun(3);

    return 0;
}