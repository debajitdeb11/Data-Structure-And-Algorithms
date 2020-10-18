#include <bits/stdc++.h>
using namespace std;

map<int, int> count_frequency(vector<int> v) {

    map<int, int> m;
    
    for (int i = 0; i < v.size(); i++) {
        m[v[i]]++;
    }

    return m;

}

int main() {

    vector<int> v = {10,12,10,15,10,20,12,12};

    map<int, int> res = count_frequency(v);

    for (auto i : res) {
        cout << i.first << ", " << i.second << "\n";
    }

    return 0;
}