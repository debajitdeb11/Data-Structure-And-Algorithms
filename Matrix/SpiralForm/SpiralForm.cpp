#include <bits/stdc++.h>
using namespace std;

void display_in_spiral(int** arr, int m, int n) {

    int top = 0;
    int right = m - 1;
    int bottom = n - 1;
    int left = 0;

    while (top <= bottom && left <= right) {
        
        // To print top row
        for (int i = left; i <= right; i++)
        {
            cout << arr[top][i] << " ";
        }
        top ++;

        // To print right column
        for (int i = top; i <= bottom; i++)
        {
            cout << arr[i][bottom] << " ";
        }
        right--;
        
        // To print bottom row reverse order
        if (top <= bottom) {
            for (int i = right; i >= left; i--)
            {
                cout << arr[bottom][i] << " ";
            }
            bottom --;
        }

        if (left <= right) {
            for (int i = bottom; i >= top; i--)
            {
                cout << arr[i][left] << " ";
            }
            left ++;
        }
    }
    
}   



int main() {

    int m = 4, n = 4;
    int count = 1;
    int** mat = new int*[4];

    for (int i = 0; i < m; i++)
        mat[i] = new int[n];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            mat[i][j] = count++;
        }
    }

    cout << "Normal Matrix: \n";

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << "\n";
    }

    display_in_spiral(mat,m,n);

    return 0;
}