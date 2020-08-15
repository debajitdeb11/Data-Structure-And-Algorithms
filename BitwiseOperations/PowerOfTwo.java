/*
    Naive Method to check if a number is 
    power of two or not
*/

package BitwiseOperations;

import java.util.Scanner;

public class PowerOfTwo {

    public static void main(String[] args) {

        final Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();

        System.out.println("Is Power of Two: " + isPowerOfTwo(n));

    }

    static boolean isPowerOfTwo(int n) {

        // Corner Case
        if (n == 0)
            return false;

        while (n > 1) {
            if (n % 2 != 0)
                return false;

            n = n / 2;
        }

        return true;

    }

}