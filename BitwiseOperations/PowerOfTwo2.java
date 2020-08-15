/*
    To find if a number is power of two
        // Using Brian Kerningham's Method
*/

package BitwiseOperations;

import java.util.Scanner;

public class PowerOfTwo2 {

    public static void main(String[] args) {

        final Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();

        System.out.println(isPowerOfTwo(n));

    }

    static boolean isPowerOfTwo(int n) {

        return (countSetBits(n) == 1) ? true : false;

    }

    static int countSetBits(int n) {

        // Corner Case
        if (n == 0)
            return 0;

        int count = 0;

        while (n > 0) {
            n = (n & (n - 1));
            count++;
        }

        return count;

    }

}