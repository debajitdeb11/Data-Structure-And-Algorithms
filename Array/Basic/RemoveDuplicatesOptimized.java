/* Efficient Method to Remove the duplicate Element from the array */

/*  Space Complexitity = O(1)
    Time Complexitity = O(n)
*/

package Array.Basic;

class RemoveDuplicatesOptimized {

    public static void main(String[] args) {

        int[] arr = { 1, 2, 2, 3, 3, 4, 5 };

        System.out.println(removeDuplicated(arr));

        System.out.println("Printing of new array");

        for (int i = 0; i < 5; i++) {
            System.out.print(arr[i] + " ");
        }

        System.out.println();

    }

    // Removes the duplicates &
    // returns the size of the array
    static int removeDuplicated(int[] arr) {

        int res = 1;

        for (int i = 1; i < arr.length; i++) {
            if (arr[i] != arr[res - 1]) {
                arr[res] = arr[i];
                res++;
            }
        }
        return res;
    }

}