/*

    Given a sorted array & a sum,
    Find if there is a triplet with given sum

    Time Complexity: O(N ^ 2)

*/

package Searching.TwoPointerApproach;

import java.util.Scanner;

class TwoPointerTripletSum {
    public static void main(String[] args) {

        final int[] arr = { 2, 3, 4, 8, 9, 20, 40 };

        final Scanner s = new Scanner(System.in);

        int sum = s.nextInt();

        String result = (isSumExist(arr, sum)) ? "Exist\n" : "Not Exist\n";

        System.out.println(result);

        s.close();

    }

    static boolean isSumExist(int arr[], int sum) {

        int p1 = 0, p2 = arr.length - 1;

        for (int i = 0; i < arr.length; i++) {

            if (isPair(arr, p1 + 1, p2, sum - arr[i]))
                return true;

        }

        return false;

    }

    static boolean isPair(int arr[], int p1, int p2, int sum) {

        while (p1 != p2) {

            int currentSum = arr[p1] + arr[p2];

            if (currentSum == sum)
                return true;

            if (currentSum < sum)
                ++p1;

            else
                --p2;

        }

        return false;

    }
}