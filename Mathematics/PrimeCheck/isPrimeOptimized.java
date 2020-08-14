/* Optimized Solution for finding if a number is Prime or not */
/* 
    Extra corner cases are added! to check if the number is 
    divisible by 2 & 3
*/

public class isPrimeOptimized {

    public static void main(String[] args) {
        System.out.println(checkPrime(1));
        System.out.println(checkPrime(2));
        System.out.println(checkPrime(19));
        System.out.println(checkPrime(100));

    }

    static boolean checkPrime(int n) {

        if (n == 1)
            return false;

        if (n == 2 || n == 3)
            return true;

        if (n % 2 == 0 || n % 3 == 0)
            return false;

        for (int i = 5; i <= Math.sqrt(n); i = i + 6) {
            if (n % i == 0 || n % (i + 2) == 0)
                return false;
        }

        return true;

    }

}