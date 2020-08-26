/* Find the square root of a number using binary search algorithm */
#include <stdio.h>

int get_square_root(int n)
{
    if (n == 0 || n == 1)
        return n;

    int low = 1;
    int high = n;
    int ans = -1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        int m_sq = mid * mid;

        if (n == m_sq)
            return mid;

        else if (n < m_sq)
            high = mid - 1;

        else
        {
            low = mid + 1;
            ans = mid;
        }
    }

    return ans;
}

int main()
{

    int n;

    scanf("%d", &n);

    printf("%d\n", get_square_root(n));

    return 0;
}