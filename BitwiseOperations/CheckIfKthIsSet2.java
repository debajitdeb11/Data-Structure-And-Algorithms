// check if K-th bit is set using right shift Operator

package BitwiseOperations;

import java.util.Scanner;

public class CheckIfKthIsSet2 {

    public static void main(String[] args) {

        final Scanner scanner = new Scanner(System.in);

        int n = scanner.nextInt();

        int k = scanner.nextInt();

        if (((n >> (k - 1)) & 1) == 1) {
            System.out.println("SET\n" + (n & (1 << (k - 1))));
        } else {
            System.out.println("NOT SET\n" + (n & (1 << (k - 1))));
        }

    }

}