#include <bits/stdc++.h>
using namespace std;

int intersection(vector<int> v1, vector<int> v2) {

    unordered_set<int> s;

    for (const auto i : v1) {
        s.insert(i);
    }

    int count = 0;

    for (const auto i : v2) {
        if (s.find(i) != s.end()) {
            count++;
            s.erase(i);
        }
    }

    return count;

}


int main() {

    vector<int> v1 = {10, 15, 20, 15, 30, 30, 5};
    vector<int> v2 = {30, 5, 30, 80};

    cout << "Intersection size: " << intersection(v1, v2) << "\n";

    return 0;
}