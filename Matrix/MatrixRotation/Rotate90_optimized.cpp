// Optimized Solution to rotate an array by 90 degree
#include <bits/stdc++.h>
using namespace std;

void print(int** arr, int m, int n) {

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
    
}


void transpose(int** arr, int m, int n) {

    for (int i = 0; i < m; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            swap(arr[i][j], arr[j][i]);
        }   
    }
    
}

void reverse_column(int** arr, int m, int n) {

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            swap(arr[i][j], arr[m - 1 - i][j]);
        }
        
    }
}

void rotate_by_90 (int** arr, int m, int n) {
    transpose(arr, m, n);
    reverse_column(arr, m, n);
}

int main () {

    int** arr;
    arr = new int*[4];
    int count = 1;

    for (int i = 0; i < 4; i++) {
        arr[i] = new int[4];
    } 

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            arr[i][j] = count++;
        }
        
    }
    

    cout << "Before Rotating...\n";
    print(arr, 4, 4);
    cout << "\n";


    cout << "After Rotating...\n";
    rotate_by_90(arr, 4, 4);
    print(arr, 4, 4);
    cout << "\n";


    return 0;
}