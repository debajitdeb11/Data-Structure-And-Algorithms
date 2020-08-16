package Mathematics.CountDigits;

import java.util.Scanner;

public class CountLog {

    public static void main(String[] args) {
        final Scanner scanner = new Scanner(System.in);

        int n = scanner.nextInt();

        System.out.println(CountLog.count(n));

    }

    static int count(int n) {
        return (int) Math.floor(Math.log10(n) + 1);
    }

}