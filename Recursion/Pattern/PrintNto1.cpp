/* Print N to 1 using Recursion */

/*

    Time Complexitity: O(N)
    Auxillary Space: O(N)

*/

#include <iostream>

void print(int n)
{
    if (n == 0)
        return;

    std::cout << n << " ";
    print(n - 1);
}

int main()
{

    print(10);
    std::cout << std::endl;

    return 0;
}