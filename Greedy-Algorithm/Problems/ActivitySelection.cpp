/* Activity Selection Problem */

#include <bits/stdc++.h>
using namespace std;

struct Time
{
    int start;
    int end;

    Time(int start, int end)
    {
        this->start = start;
        this->end = end;
    }
};

bool compare(Time t1, Time t2)
{
    return (t1.start < t2.start);
}

void display(Time arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i].start << ", " << arr[i].end << "\n";
    }
}

int getMaxActivities(Time arr[], int n)
{

    sort(arr, arr + n, compare);

    int res = 1;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i].end <= arr[j].start)
            {
                res++;
                i = j;
            }
        }
    }

    return res;
}

int main()
{

    Time t1(2, 3);
    Time t2(1, 4);
    Time t3(5, 8);
    Time t4(6, 10);

    Time arr[] = {t1, t2, t3, t4};

    int n = sizeof(arr) / sizeof(arr[0]);

    cout << getMaxActivities(arr, n) << "\n";

    return 0;
}