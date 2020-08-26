package Searching.LastOccurence;

class LastOccurence {
    public static void main(final String[] args) {

        final int[] arr = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2 };
        final int[] arr1 = { 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3 };

        System.out.println(findTheLastOccurence(arr, 1, 0, arr.length));
        System.out.println(findTheLastOccurence(arr, 2, 0, arr.length));
        System.out.println(findTheLastOccurence(arr1, 3, 0, arr1.length));

    }

    static int findTheLastOccurence(final int arr[], final int key, final int low, final int high) {

        if (low > high)
            return -1;

        final int mid = (low + high) / 2;

        if (key < arr[mid])
            return findTheLastOccurence(arr, key, low, mid - 1);

        if (key > arr[mid])
            return findTheLastOccurence(arr, key, mid + 1, high);

        else {
            if (mid == arr.length - 1 || arr[mid + 1] != arr[mid])
                return mid;

            return findTheLastOccurence(arr, key, mid + 1, high);
        }

    }
}