/*

Recursive Solution to find the First Occurence of an element
in an array using binary search

Time Complexity: O(log N);
Space Complexity: O(log N);

*/

package Searching.FirstOccurence;

public class FirstOccurenceBS {
    public static void main(String[] args) {

        int[] arr = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2 };

        System.out.println(findFirstOccurence(arr, 1, 0, arr.length - 1));
        System.out.println(findFirstOccurence(arr, 2, 0, arr.length - 1));

    }

    static int findFirstOccurence(int arr[], int key, int low, int high) {

        if (low > high)
            return -1;

        int mid = (low + high) / 2;

        if (key > arr[mid])
            return findFirstOccurence(arr, key, mid + 1, high);

        else if (key < arr[mid])
            return findFirstOccurence(arr, key, low, mid - 1);

        else {

            // if mid = 0 then it is also the first occurence
            if (mid == 0 || arr[mid - 1] != arr[mid])
                return mid;

            return findFirstOccurence(arr, key, low, mid - 1);

        }

    }

}