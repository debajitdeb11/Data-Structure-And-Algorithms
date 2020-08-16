package Mathematics.PrimeFactors;

/* Brute Force Approach */
// Time Complextity: O(n^2 log n)

public class PFactor {

    public static void main(String[] args) {

        primeFactor(19786523);

    }

    static void primeFactor(int n) {

        for (int i = 2; i < n; i++) {
            if (isPrime(i)) {

                int x = i;

                while (n % x == 0) {
                    System.out.print(i + " ");
                    x = x * i;
                }

            }
        }

    }

    static boolean isPrime(int n) {

        // Corner Case: If the n is 1, return fasle.
        if (n == 1)
            return false;

        // Corner Case: If the n is 2 or 3, return true.
        if (n == 2 || n == 3)
            return true;

        if (n % 2 == 0 || n % 3 == 0)
            return false;

        for (int i = 5; i * i <= n; i += 6) {
            if (n % i == 0 || n % (i + 2) == 0)
                return false;
        }

        return true;

    }

}