// Rotate a Matrix by 90 degree
#include <bits/stdc++.h>
using namespace std;

void print(vector<vector <int>> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            cout << v[i][j] << " ";
        }
        cout << "\n";
    }
    
}

// Naive Solution
void rotate_matrix_90_degree(vector<vector<int>> &mat)
{   
    int temp [mat.size()][mat.size()];

    for (int i = 0; i < mat.size(); i++)
    {   
        for (int j = mat[i].size() - 1; j >= 0; j--)
        {
            temp[i][j] = mat[j][i];
        }
        
    }

    int size = mat.size();
    mat.clear();

    for (int i = 0; i < size; i++)
    {   
        vector<int> vv;
        for (int j = 0; j < size; j++)
        {
            vv.push_back(temp[i][j]);
        }
        mat.push_back(vv);
    }
    
}

void intialize(vector<vector <int>> &v)
{
    int count = 1;

    for (int i = 0; i < 3; i++)
    {
        vector<int> vv;
        for (int j = 0; j < 3; j++)
        {
            vv.push_back(count ++);
        }
        v.push_back(vv);
    }
}

int main() {

    vector<vector<int>> mat;

    intialize(mat);

    cout << "Before Rotation:\n";
    
    print(mat);

    cout<< "\n";

    cout << "After Rotation: \n";

    rotate_matrix_90_degree (mat);

    print(mat);

    return 0;
}

