#include <bits/stdc++.h>
using namespace std;

int JosephusPosition(int n, int k)
{

    if (n == 1)
        return 0;

    return (k + JosephusPosition((n - 1), k)) % n;
}

int main()
{

    int n, k;
    cin >> n >> k;

    cout << JosephusPosition(n, k) << "\n";

    return 0;
}