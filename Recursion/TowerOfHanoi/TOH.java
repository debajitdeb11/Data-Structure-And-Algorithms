package Recursion.TowerOfHanoi;

import java.util.Scanner;

class TOH {

    public static void main(String[] args) {

        final Scanner scanner = new Scanner(System.in);

        int n = scanner.nextInt();
        scanner.nextLine();

        char a = scanner.next().charAt(0);
        char b = scanner.next().charAt(0);
        char c = scanner.next().charAt(0);

        TOH_Compute(n, a, b, c);

    }

    static void TOH_Compute(int n, char A, char B, char C) {

        if (n == 1) {
            System.out.println("Move 1 from " + A + " ==>> " + C);
            return;
        }

        TOH_Compute(n - 1, A, C, B);
        System.out.println("Move " + n + " from " + A + " ==>> " + C);
        TOH_Compute(n - 1, B, A, C);

    }

}