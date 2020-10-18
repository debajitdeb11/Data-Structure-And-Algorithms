/* Program on unordered_map */
#include <iostream>
#include <unordered_map>
using namespace std;

int main() {

    unordered_map<string, int> m;

    m["Debajit"] = 10;
    m["Semikha"] = 20;
    m["Deepika"] = 40;
    m["Tripika"] = 50;



    for (auto x : m) {
        cout << x.first << " -> " << x.second <<"\n";
    }

    return 0;
}