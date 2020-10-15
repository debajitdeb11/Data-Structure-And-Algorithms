# Print only the boundary elements of a matrix

```

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

```

__Time Complexity:__ Theta (Row) + Theta (Column)