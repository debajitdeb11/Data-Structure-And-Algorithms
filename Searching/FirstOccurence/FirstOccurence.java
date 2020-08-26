/* 

    Index of 1st occurence of an element in an array
    1. Naive Solution

    Time Complexity: O(N)
*/

package Searching.FirstOccurence;

class FirstOccurence {

    public static void main(String[] args) {

        int[] arr = { 10, 20, 20, 30, 30, 30, 30, 30, 40 };

        System.out.println(getIndex(arr, 30));

    }

    static int getIndex(int arr[], int key) {

        for (int i = 0; i < arr.length; i++)
            if (arr[i] == key)
                return i;

        return -1;
    }

}