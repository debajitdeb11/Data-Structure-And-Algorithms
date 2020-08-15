/* 

Count set N-bits in an integer : Brute Force Approach

*/

package BitwiseOperations;

import java.util.Scanner;

class CountSetBits {

    public static void main(String[] args) {

        final Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();

        System.out.println("No of SET bits are: " + countSetBits(n));

    }

    static int countSetBits(int n) {

        int count = 0;

        while (n > 0) {
            count = count + (n & 1);
            n = n >> 1;
        }

        return count;

    }

}