#include <bits/stdc++.h>
#include "MyHash.h"
using namespace std;

int main() {

    MyHash hash(7);

    int arr[] = {49, 56, 62, 88, 92, 54};
    
    for(const auto i : arr) {
        hash.insert(i);
    }

    cout << "Search: 56 : Result = " << hash.search(56) << "\n";

    cout << "Delete: 56 : Result = " << hash.erase(56) << "\n";

    cout << "Search: 56 : Result = " << hash.search(56) << "\n";


    return 0;
}