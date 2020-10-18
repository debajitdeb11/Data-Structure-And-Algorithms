#include <bits/stdc++.h>
using namespace std;

unordered_set<int> Union(vector<int> v1, vector<int> v2) {

    unordered_set<int> s;

    for (auto x : v1)
        s.insert(x);

    for (auto x : v2)
        s.insert(x);


    return s;
}

int main() {

    vector<int> v1 = {10,15,20,15,30,30,5};
    vector<int> v2 = {30,5,30,80};

    unordered_set<int> res = Union(v1, v2);

    cout << "Printing union: ";

    for (const auto i : res) {
        cout << i << " ";
    }

    cout << "\n";

    return 0;
}