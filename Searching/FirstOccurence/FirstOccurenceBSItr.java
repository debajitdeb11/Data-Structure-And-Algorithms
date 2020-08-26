/* 

Find the 1st Occurence of an element in the 
Iterative Binary Search

Time Complexity: O(log N)
Space Complexity: O(1)

*/

package Searching.FirstOccurence;

class FirstOccurenceBSItr {
    public static void main(String[] args) {

        int[] arr = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2 };

        System.out.println(findFirstOccurence(arr, 1));
        System.out.println(findFirstOccurence(arr, 2));
    }

    static int findFirstOccurence(int arr[], int key) {

        int low = 0;
        int high = arr.length - 1;

        while (low <= high) {

            int mid = (low + high) / 2;

            if (key > arr[mid])
                low = mid + 1;

            else if (key < arr[mid])
                high = mid - 1;

            else {
                if (mid == 0 || arr[mid] != arr[mid - 1])
                    return mid;

                else
                    high = mid - 1;
            }

        }

        return -1;

    }
}