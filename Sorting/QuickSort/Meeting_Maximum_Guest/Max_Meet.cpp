/*
    In this Problem you were given the arrival
    and the deperture time of the guests in a party

    We need to find out the Interval at which
    we can meet maximum guests

*/

#include <bits/stdc++.h>
using namespace std;

int meet_time (int a[], int d[], int n) {

    sort(a, a + n);
    sort(d, d + n);

    int i = 1, j = 0, res = 1, curr = 1;

    while (i < n && j < n) {
        if (a[i] <= d[j]) {
            curr++, res++;
        }
        else {
            curr--, j++;
        }

        res = max(res, curr);

        return res;
    }


}

int main() {

    return 0;
}