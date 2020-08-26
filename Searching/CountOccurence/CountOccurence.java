/*

    Count the frequency of an element in a sorted array
    using Binary Search method

    Time Complexity: O(N)

*/

package Searching.CountOccurence;

class CountOccurence {
    public static void main(String[] args) {
        final int[] arr = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2 };

        System.out.println(getFrequency(arr, 1));
        System.out.println(getFrequency(arr, 2));
        System.out.println(getFrequency(arr, 3));

    }

    static int getFrequency(int arr[], int key) {

        int first = getFirstOccurence(arr, key);

        if (first == -1)
            return 0;

        return (getLastOccurence(arr, key) - first + 1);

    }

    static int getFirstOccurence(int arr[], int key) {

        int low = 0;
        int high = arr.length - 1;

        while (low <= high) {

            int mid = (low + high) / 2;

            if (key < arr[mid])
                high = mid - 1;

            else if (key > arr[mid])
                low = mid + 1;

            else {

                if (mid == 0 || arr[mid - 1] != arr[mid])
                    return mid;

                else
                    high = mid - 1;

            }

        }

        return -1;

    }

    static int getLastOccurence(int arr[], int key) {

        int low = 0;
        int high = arr.length - 1;

        while (low <= high) {

            int mid = (low + high) / 2;

            if (key < arr[mid])
                high = mid - 1;

            else if (key > arr[mid])
                low = mid + 1;

            else {

                if (mid == arr.length - 1 || arr[mid] != arr[mid + 1])
                    return mid;

                else
                    low = mid + 1;

            }

        }
        return -1;

    }

}