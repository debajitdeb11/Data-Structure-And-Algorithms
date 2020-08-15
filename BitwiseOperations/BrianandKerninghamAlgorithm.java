package BitwiseOperations;

import java.util.Scanner;

public class BrianandKerninghamAlgorithm {

    public static void main(String[] args) {

        final Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();

        System.out.println("No of SET bits are: " + countSetBits(n));

    }

    static int countSetBits(int n) {

        int count = 0;

        while (n > 0) {
            n = n & (n - 1);
            count++;
        }
        return count;
    }

}