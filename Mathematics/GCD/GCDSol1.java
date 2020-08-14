/* Solution : 1 */

import java.util.Scanner;

public class GCDSol1 {

    static int gcd(int a, int b) {
        int res = Math.min(a, b);

        while (res > 0) {
            if (a % res == 0 && b % res == 0) {
                break;
            }
            res--;
        }

        return res;

    }

    public static void main(String[] args) {
        final Scanner scanner = new Scanner(System.in);

        int a = scanner.nextInt();
        int b = scanner.nextInt();

        System.out.println(gcd(a, b));

    }

}