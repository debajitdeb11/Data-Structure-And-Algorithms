#include <iostream>
#include <algorithm>
using namespace std;

struct points
{
    int x;
    int y;
};

bool cmp(points p1, points p2)
{
    return (p1.x < p2.x);
}

int main()
{

    points p[] = {{1, 2}, {5, 6}, {3, 8}};

    for (auto i : p)
    {
        cout << i.x << " " << i.y << "\n";
    }

    sort(p, p + 3, cmp);

    cout << "---------------------------------------------"
         << "\n";

    for (auto i : p)
    {
        cout << i.x << " " << i.y << "\n";
    }

    return 0;
}