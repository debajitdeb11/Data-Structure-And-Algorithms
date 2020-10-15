// Print an Array in Snake Pattern
#include <bits/stdc++.h>
using namespace std;

void print_snake_pattern(vector <vector<int>> &mat) {

    for (int i = 0; i < mat.size(); i++) {
        if (i % 2 == 0) {
            for (int j = 0; j < mat[i].size(); j++) {
                cout << mat[i][j] << " ";
            }
        }

        else {
            for (int j = mat.size() - 1; j >= 0; j--) {
                cout << mat[i][j] << " ";
                }
        }
        
        cout << "\n";    
    }
        
}

void print(vector<vector<int>> &mat) {

    for (int i = 0; i < mat.size(); i++)
    {
        for (int j = 0; j < mat[i].size(); j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << "\n";
    }
    
}

int main() {

    vector<vector<int>> mat;
    int count = 0;
    for (int i = 0; i < 4; i++) {
        vector<int> v;
        for (int j = 0; j < 4; j++) {
            v.push_back(++count);
        }
        mat.push_back(v);
    }

    cout << "Normal Printing...\n";
    print(mat);

    cout << "Snake Pattern Printing \n";
    print_snake_pattern(mat);

    return 0;
}