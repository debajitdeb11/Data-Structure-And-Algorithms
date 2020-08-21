/*

    Find the leader in the array?

    if all the elements in the right side
    of a element are smaller then the
    element is consider to be leader.

*/

/* 
    Time Complexitity: O(n ^ 2).
    Auxilary Space: O(1).
*/

package Array.LeaderInArray;

public class Leader {
    public static void main(String[] args) {

        int[] arr = { 7, 10, 4, 10, 6, 5, 2 };

        leader(arr);

    }

    static void leader(int arr[]) {

        boolean flag;

        for (int i = 0; i < arr.length; i++) {
            flag = false;

            for (int j = i + 1; j < arr.length; j++) {

                if (arr[i] <= arr[j]) {
                    flag = true;
                    break;
                }

            }

            if (!flag) {
                System.out.print(arr[i] + " ");
            }

        }
        System.out.println();

    }
}