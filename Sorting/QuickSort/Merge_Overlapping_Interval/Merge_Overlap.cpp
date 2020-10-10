// Merge the overlapping Interal

#include<bits/stdc++.h>
using namespace std;

class Interval {
    public:
        int x, y;
        Interval(int x, int y) {
            this->x = x;
            this->y = y;
        }
};

void merge(Interval arr[], int n) {

    for (int i = 1; i < n; i++) {
    
    }

}

int main() {

    Interval i1(1,3);
    Interval i2(2,4);
    Interval i3(5,7);
    Interval i4(6,8);

    Interval arr[] = {i1, i2, i3, i4};

    int size = sizeof(arr)/sizeof(arr[0]);

    cout << size;

    return 0;

}