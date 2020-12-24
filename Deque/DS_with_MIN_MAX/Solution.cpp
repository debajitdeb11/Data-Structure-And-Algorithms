/* Design a data Structure that supports following Operations in O(1) T.C 

    insertMin(x)
    insertMax(x)
    getMin(x)
    getMax(x)
    extractMin(x)
    extractMax(x)
*/

#include <bits/stdc++.h>
using namespace std;

struct MyDS {

    deque<int> dq;

    void insertMin(int x) {
        dq.push_front(x);
    }

    void insertMax(int x) {
        dq.push_back(x);
    }

    int getMin() {
        return dq.front();
    }

    int getMax() {
        return dq.back();
    }

    int extractMin() {
        int x = dq.front();
        dq.pop_front();
        return x;
    }

    int extractMax() {
        int x = dq.back();
        dq.pop_back();
        return x;
    }


};