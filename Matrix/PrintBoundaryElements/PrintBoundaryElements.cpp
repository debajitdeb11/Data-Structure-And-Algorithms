// Program to print boundary elements
#include <bits/stdc++.h>
using namespace std;

void print_boundary_elements(vector<vector<int>> &mat) {

    for (int i = 0; i < mat.size(); i++) {
        cout << mat[0][i] << " ";
    }

    for (int i = 1; i < mat.size(); i++)
    {
        cout << mat[i][mat.size()-1] << " ";
    }
    
    for (int i = mat.size() - 2; i >= 0; i--)
    {
        cout << mat[mat.size()-1][i] << " ";
    }

    for (int i = mat.size() - 2; i >= 1; i--)
    {
        cout << mat[i][0] << " ";
    }
    
    cout << "\n";

}

int main() {

    vector<vector<int>> mat;
    int count = 1;
    for (int i = 0; i < 4; i++)
    {
        vector<int> v;
        for (int j = 0; j < 4; j++)
        {
            v.push_back(count++);
        }
        mat.push_back(v);
    }
    
    print_boundary_elements(mat);

    return 0;
}

