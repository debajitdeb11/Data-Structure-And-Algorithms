package BitwiseOperations;

import java.util.Scanner;

class PowerOfTwoOptSoln {
    public static void main(String[] args) {
        final Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();

        System.out.println(isPowerOfTwo(n));

    }

    static boolean isPowerOfTwo(int n) {

        // if n == Zero
        if (n == 0)
            return false;

        // if binary of n AND n-1
        // is binary of 0 i.e., 0 then true
        return ((n & (n - 1)) == 0);
    }

}
