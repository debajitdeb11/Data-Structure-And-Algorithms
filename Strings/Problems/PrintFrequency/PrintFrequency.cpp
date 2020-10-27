// Print the frequency of character in a string in sorted order

#include <iostream>
#include <string>

using namespace std;

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

int main() {

    string str1 = "geeksforgeeks";
    string str2 = "debajitdeb";
    string str3 = "alen";

    print_frequency(str1);
    cout << "\n";
    print_frequency(str2);
    cout << "\n";
    print_frequency(str3);

    return 0;
}