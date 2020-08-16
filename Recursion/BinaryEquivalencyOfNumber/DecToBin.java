package Recursion.BinaryEquivalencyOfNumber;

import java.util.Scanner;

class DecToBin {

    public static void main(String[] args) {
        final Scanner scanner = new Scanner(System.in);

        int n = scanner.nextInt();

        decToBin(n);
        System.out.println();
        scanner.close();

    }

    static void decToBin(int n) {

        if (n == 0)
            return;

        decToBin(n / 2);
        System.out.print(n % 2);

    }

}