/* Print 1 to n using Recursion */

/*

    Time Complexitity: O(N)
    Auxillary Space: O(N)

*/

#include <iostream>

void print(int n)
{
    if (n == 0)
        return;

    print(n - 1);
    std::cout << n << " ";
}

int main()
{

    print(10);
    std::cout << std::endl;

    return 0;
}