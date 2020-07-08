#include <bits/stdc++.h>
using namespace std;

class LinkedList
{
public:
    string msg;
};

int main()
{
    LinkedList l1 = new LinkedList();
    l1.msg = "Jello";

    LinkedList l2 = new LinkedList();
    l2.msg = "Hello";

    cout << l1.msg << "\n";

    cout << l2.msg << "\n";

    return 0;
}