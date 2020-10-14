// Merge Overlapping Intervals
#include <iostream>
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

        }

};

bool is_overlapping(Interval i1, Interval i2) {
    
    if (i1.start >= i2.start && i1.start < i2.end)
        return true;
    else if (i2.start>= i1.start && i2.start < i1.end)
        return true;
    else 
        return false;
}

Interval merge(Interval i1, Interval i2) {
    int newStart = min(i1.start, i2.start);
    int newEnd = max(i1.end, i2.end);

    Interval i3(newStart, newEnd);
    return i3;
}

int main() {

    Interval i1(1,5);
    Interval i2(3, 7);

    if (is_overlapping(i1,i2) == true) {
        cout << "Merging!!!" << "\n";
        Interval newInt = merge(i1, i2);
        cout << newInt.start << "," << newInt.end << "\n";
    }

    return 0;
}
