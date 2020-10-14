# Multi-Dimensional Array

## Standard Multidimentional Array

```
 int arr[3][2] = {{10, 20},
                    {30, 40},
                    {50, 60}};

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++)
            arr[i][j] = i + j;
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++)
            cout << arr[i][j] << " ";
        cout << "\n";
    }

```

## Multidimensional Array using pointer

```
int m = 3, n = 2;
int* arr[m];


for (int i = 0; i < m; i++)
    arr[i] = new int[n];

```

## Multidimensional Array using double pointer

```
int m = 3, n = 2;

    int** arr;

    arr = new int* [m];

    // Declearing the 2-D array
    for (int i = 0; i < m; i++)
        arr[i] = new int [n];

    // Initializing the values
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++){
            arr[i][j] = 10;
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
```