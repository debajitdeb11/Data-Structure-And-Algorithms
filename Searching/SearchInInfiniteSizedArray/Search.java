package Searching.SearchInInfiniteSizedArray;

class Search {
    public static void main(String[] args) {

        int[] arr = { 10, 20, 30, 35, 40, 45, 50, 55, 56, 57, 58, 59, 60, 63, 67, 69, 82, 88, 89, 96, 123, 126, 127,
                188, 199, 199, 199, 199, 199999 };

        int result = search(arr, 55);

        System.out.println(result);

    }

    static int search(int arr[], int key) {

        if (arr[0] == key)
            return 0;

        int i = 1;

        while (arr[i] <= key) {
            i = i * 2;
        }

        if (arr[i] == key)
            return i;

        return binarySearch(arr, key, i / 2 + 1, i - 1);

    }

    static int binarySearch(int arr[], int key, int low, int high) {

        while (low <= high) {

            int mid = (low + high) / 2;

            if (key == arr[mid])
                return mid;

            else if (key < arr[mid])
                high = mid - 1;

            else
                low = mid + 1;

        }

        return -1;

    }

}