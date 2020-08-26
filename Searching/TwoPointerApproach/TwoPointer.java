/*
     Given a sorted array and a sum,
     Find if there is a pair with the given
     sum.
*/

package Searching.TwoPointerApproach;

import java.util.Scanner;

class TwoPointer {

    public static void main(String[] args) {

        final int[] arr = { 2, 5, 8, 12, 30 };

        final Scanner scanner = new Scanner(System.in);

        int sum = scanner.nextInt();
        scanner.nextLine();

        String result = (isSumExist(arr, sum)) ? "Sum exist\n" : "Not exist\n";

        System.out.println(result);

        final int[] arr1 = { 2, 4, 8, 9, 11, 12, 20, 30 };

        int sum1 = scanner.nextInt();

        String result1 = (isSumExist(arr1, sum1)) ? "Sum exist\n" : "Not exist\n";

        System.out.println(result1);

        scanner.close();
    }

    static boolean isSumExist(int arr[], int sum) {

        int p1 = 0;
        int p2 = arr.length - 1;

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