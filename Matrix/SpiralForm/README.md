# Printing a Matrix in Spiral Form

```
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

```

__Time Complexity:__ \Theta (R x C)
__Aux Space:__ \Theta (1)