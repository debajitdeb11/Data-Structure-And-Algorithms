# Counting Sort Algorithm

Counting Sort algorithm is an algorithm which sorts an array based on no of times an elements appear.

__Time Complexity:__ _O (N+K)_

## Naive Approach

```
void counting_sort(int arr[], int n, int k) {

    int count[k];

    // Fill the array with 0
    fill(count, count+k+1, 0);

    for (int i = 0; i < n; i++) {
        count[arr[i]]++;
    }

    int index = 0;
    for (int i = 0; i < k; i++) {
        for (int j = 0; j < count[i]; j++) {
            arr[index] = i;
            index++;
        }   
    }

}
```

## Feature of Counting Sort
- Not a comparision based algorithm
- O(n+k)
- O(n+k)
- Stable
- Used as a sub routine in Radix Sort

