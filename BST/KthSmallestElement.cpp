/* K-th Smallest Element */

#include <iostream>
#include <set>
using namespace std;

int kth_smallest_element(set<int> &s, int k)
{

    if (k > s.size())
    {
        return INT16_MIN;
    }

    int count = 1;

    auto it = s.begin();

    while (count != k)
    {
        it++;
        count++;
    }

    return *it;
}

int main()
{

    set<int> s;

    s.insert(10);
    s.insert(5);
    s.insert(15);
    s.insert(20);
    cout << "K-th Value is: " << kth_smallest_element(s, 3) << "\n";
    s.insert(2);
    cout << "K-th Value is: " << kth_smallest_element(s, 3) << "\n";

    return 0;
}