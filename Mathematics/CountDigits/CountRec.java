package Mathematics.CountDigits;

import java.util.Scanner;

public class CountRec {

    public static void main(String[] args) {

        final Scanner scanner = new Scanner(System.in);

        int n = scanner.nextInt();

        System.out.println(CountRec.count(n));

        scanner.close();

    }

    static int count(int n) {
        if (n == 0) {
            return 0;
        }

        return 1 + count(n / 10);
    }

}