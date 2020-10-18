/* Program on unordered_set */

#include <bits/stdc++.h>
using namespace std;

int main() {

    unordered_set<int> s;

    s.insert(10);
    s.insert(20);
    s.insert(5);
    s.insert(15);

    cout << "Printing values: \n";

    for (auto it = s.begin(); it != s.end(); it++) {

        // Order of printing is not defined
        cout << *it << "\n";
    }

    cout << "size : " << s.size() <<"\n";
    
    s.clear();

    cout << "size : " << s.size() <<"\n";

    if (s.find(15) == s.end())
        cout << "Not Found\n";
    else 
        cout << "Found\n" << *(s.find(15));

    return 0;
}