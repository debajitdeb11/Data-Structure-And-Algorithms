/* Generate a number with given digits */
#include <bits/stdc++.h>
using namespace std;

void printFirstN(int n) {

    queue<string> q;

    q.push("5");
    q.push("6");

    for (int i = 0; i < n; i++)
    {
        string current = q.front();
        cout << current << " ";
        q.pop();

        q.push(current + "5");
        q.push(current + "6");
    }

}

int main() {

    printFirstN(10);

    return 0;
}