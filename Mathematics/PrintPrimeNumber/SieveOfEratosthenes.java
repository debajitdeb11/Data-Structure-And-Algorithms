package Mathematics.PrintPrimeNumber;

import java.util.Arrays;

// Implementation of Sieve of Eratosthenes

class SieveOfEratosthenes {

    public static void main(String[] args) {

        sieve(12);

    }

    static void sieve(int n) {
        if (n <= 1)
            return;

        boolean isPrime[] = new boolean[n + 1];

        Arrays.fill(isPrime, true);

        for (int i = 2; i * i <= n; i++) {

            if (isPrime[i]) {

                for (int j = i * i; j <= n; j = j + i) {
                    isPrime[j] = false;
                }

            }

        }

        for (int i = 2; i <= n; i++) {
            if (isPrime[i]) {
                System.out.print(i + " ");
            }
        }

        System.out.println();

    }

}