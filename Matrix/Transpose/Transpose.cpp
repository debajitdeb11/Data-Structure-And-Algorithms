// Transpose of a Matrix
#include <bits/stdc++.h>
using namespace std;

void transpose(int **arr, int m, int n) {

    // int temp[m][n];

    // for (int i = 0; i < m; i++) 
    // {
    //     for (int j = 0; j < n; j++) 
    //     {
    //         temp[i][j] = arr[j][i];
    //     }
    // }

    // for (int i = 0; i < m; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         arr[i][j] = temp[i][j];
    //     }
        
    // }

    for (int i = 0; i < m; i++) 
    {
        for (int j = i + 1; j < n; j++) 
        {
            swap(arr[i][j], arr[j][i]);
        }
    }
    

}

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

int main() {

    int m = 4, n = 4;

    int** arr;
    arr = new int*[4];

    for (int i = 0; i < m; i++) {
        arr[i] = new int[n];
    }

    int count = 1;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            arr[i][j] = count++;
        }
    }

    cout << "Before Transpose: \n";

    print(arr, m, n);

    // Transposing
    transpose(arr, m, n);

    cout << "After Transpose: \n";

    print(arr, m, n);

    return 0;
}