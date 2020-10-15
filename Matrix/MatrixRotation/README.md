# Matrix Roatation by 90 degree

## Naive Solution

```

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

```

__Time Complexity:__ Theta (R x C)
__Space Complexity:__ Theta (R x C)


## Optimized Solution

```
// To perform transpose
void transpose(int** arr, int m, int n) {

    for (int i = 0; i < m; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            swap(arr[i][j], arr[j][i]);
        }   
    }
    
}

// To reverse the column
void reverse_column(int** arr, int m, int n) {

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            swap(arr[i][j], arr[m - 1 - i][j]);
        }
        
    }
}

// To rotate the array
void rotate_by_90 (int** arr, int m, int n) {
    transpose(arr, m, n);
    reverse_column(arr, m, n);
}

```

__Time Complexity:__ \Theta (R x C)
__Space Complexity:__ \Theta (1)