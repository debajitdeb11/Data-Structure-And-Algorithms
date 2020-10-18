# Longest Consecutive Subsequence
`The idea is to find the longest consecutive subsequence in an array`

```
Input : [] = {3,8,4,5,7};
Output: 3

* The elements might present in any order
```

## Naive Solution

Approach:
- Sort the array first
- SET `count = 1` and `max_length = 1`
- Then, Compare every element with the previous element and if the difference between them is `1` then increase the `count` by 1 else SET `max_length = max(max_length, count)` and RESET `count = 1` 

```
int longest_consecutive_subsequence(int arr[], int n) {

    // Sorting
    sort(arr, arr+n);

    int max_length = 1;
    int current_length = 1;
    for (int i = 1; i < n; i++) {
        if (arr[i] - arr[i - 1] == 1)
            current_length++;
        else 
        {
          max_length = max(max_length, current_length);
          current_length = 1;
        }
    }
    
    // For the last element in the array
    max_length = max(max_length, current_length);


    return max_length;
}

```
Time Complexity: `O(N * log N)`

AUX Space: `O(1)`


## Optimized Solution using Hashing

```

int longest_consecutive_subsequence(int arr[], int n) {

    int max_length = 0;
    unordered_set<int> s;

    for (int i = 0; i < n; i++)
        s.insert(arr[i]);

    for (int i = 0; i < n; i++) {
        if (s.find(arr[i] - 1) == s.end()) {
            int current_length = 1;
            while(s.find(arr[i] + current_length) != s.end())
                current_length++;

            max_length = max(max_length, current_length);
        }
    }

    return max_length;
}

```

Time Complexity: `O(N)`

AUX Space: `O(N)`