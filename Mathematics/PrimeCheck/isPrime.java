package Mathematics.PrimeCheck;

/* Solution for finding if a number is Prime or not */

public class isPrime {

    public static void main(String[] args) {
        System.out.println(checkPrime(1));
        System.out.println(checkPrime(2));
        System.out.println(checkPrime(19));
        System.out.println(checkPrime(100));

    }

    static boolean checkPrime(int n) {

        if (n == 1)
            return false;

        for (int i = 2; i < Math.sqrt(n); i++) {
            if (n % i == 0)
                return false;
        }

        return true;

    }

}