# Transpose of a Matrix


### Naive Approach
```
void transpose(int **arr, int m, int n) {

     int temp[m][n    
     for (int i = 0; i < m; i++) 
     {
         for (int j = 0; j < n; j++) 
         {
             temp[i][j] = arr[j][i];
         }
    
     for (int i = 0; i < m; i++)
     {
         for (int j = 0; j < n; j++)
         {
             arr[i][j] = temp[i][j];
         }
        
    }
}
```

### Efficient Solution

```
    for (int i = 0; i < m; i++) 
    {
        for (int j = i + 1; j < n; j++) 
        {
            swap(arr[i][j], arr[j][i]);
        }
    }
```