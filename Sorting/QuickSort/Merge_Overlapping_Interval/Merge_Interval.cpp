// Program to Merge Intervals
#include <bits/stdc++.h>
using namespace std;

class Interval {
    public:
        int start;
        int end;

        Interval(int start, int end) {
            this->start = start;
            this->end = end;
        }

        Interval() {
            // Default Constructor
        }
};

bool cmpr(Interval i1, Interval i2);

void mergeIntervals(Interval arr[], int size) {
    sort(arr, arr + size, cmpr);
    int res = 0;

    for (int i = 1; i < size; i++) {
        if (arr[res].end >= arr[i].start) {
            arr[res].start = min(arr[res].start, arr[i].start);
            arr[res].end = max(arr[res].end, arr[i].end);
        } else {
            arr[++res] = arr[i];
        }
    }

    for (int i = 0; i <= res; i++) {
        cout << arr[i].start << ", " << arr[i].end << "\n";
    }
}

int main() {

    Interval i1(1, 10);
    Interval i2(2, 9);
    Interval i3(3, 8);
    Interval i4(4, 6);

    Interval arr[] = {i1, i2, i3, i4};
    int size = sizeof(arr)/sizeof(arr[0]);

    mergeIntervals(arr, size);

    return 0;
}

bool cmpr(Interval i1, Interval i2) {
    return (i1.start <= i2.start);
}