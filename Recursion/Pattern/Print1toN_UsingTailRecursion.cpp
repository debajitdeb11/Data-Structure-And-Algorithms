/* Print 1 to n using Tail Recursion */

/*

    Time Complexitity: O(N)
    Auxillary Space: O(1)

*/

#include <iostream>

void print(int n)
{
    const static int cn = n;

    if (n == 0)
        return;

    std::cout << (cn + 1) - n << " ";
    print(n - 1);
}

int main()
{

    print(10);
    std::cout << std::endl;

    return 0;
}