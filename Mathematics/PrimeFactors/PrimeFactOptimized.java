/* Optimized Algorithm for finding Prime Factor */

public class PrimeFactOptimized {

    public static void main(String[] args) {

        printPrimeFactor(12);

    }

    static void printPrimeFactor(int n) {

        // Corner Case: If n is less then 1
        if (n <= 1)
            return;

        // Corner Case: while n is divisible by 2 or 3
        while (n % 2 == 0) {
            System.out.println(2);
            n = n / 2;
        }

        while (n % 3 == 0) {
            System.out.println(3);
            n = n / 3;
        }

        for (int i = 5; i * i <= n; i = i + 6) {

            while (n % i == 0) {
                System.out.println(i);
                n = n / i;
            }

            while (n % (i + 2) == 0) {
                System.out.println(i + 2);
                n = n / (i + 2);
            }
        }

        if (n > 3)
            System.out.println(n);

    }

}