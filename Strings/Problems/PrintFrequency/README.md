# Print the frequency of character in a string in sorted order


```

void print_frequency(string str) {

    int count[26] = {0};

    // Time Complexity: O(N)
    for (int i = 0; i < str.length(); i++) {
        count[str[i] - 'a']++;
    }

    // Time Complexity: O(1)
    for (int i = 0; i < 26; i++)
    {
        if(count[i] > 0) {
            cout << (char) (i + 'a') << " -> " << count[i] << "\n";
        }
    }
    
}

```

_Time Complexity :_ `O (N)`

_Aux Space :_ `O (1)`