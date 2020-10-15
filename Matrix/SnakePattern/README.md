# Print Array in Snake Pattern

Using the Odd-Even Logic we can print the matrix in Snake Pattern

```
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

```

#### Time Complexity: 
    Theta (R x C)
        R: No. of Rows
        C: No. of Columns