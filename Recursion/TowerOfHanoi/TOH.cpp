/* Tower of Hanoi */

#include <bits/stdc++.h>
using namespace std;

void TOH(int n, char A, char B, char C)
{

    if (n == 1)
    {
        cout << "Move 1 "
             << "from " << A << " ==>> " << C << "\n";
        return;
    }

    TOH(n - 1, A, C, B);
    cout << "Move " << n << " from " << A << " ==>> " << C << "\n";
    TOH(n - 1, B, A, C);
}

int main()
{
    int n;
    char A, B, C;

    cin >> n;
    cin >> A >> B >> C;

    TOH(n, A, B, C);

    return 0;
}