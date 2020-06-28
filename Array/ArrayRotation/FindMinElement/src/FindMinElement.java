package Array.ArrayRotation.FindMinElement.src;

public class FindMinElement {

    public static void main(String[] args) {

        int[] arr = { 4, 5, 6, 7, 8, 9, 1, 2, 3 };

        System.out.println("Min Element in the array is at index " + findMin(arr));

    }

    public static int findMin(int[] arr) {

        int min = Integer.MAX_VALUE;
        int i;
        int position = -1;
        for (i = 0; i < arr.length - 1; i++) {
            if (arr[i] < min) {
                min = arr[i];
                position = i;
            }
        }
        return position;

    }

}