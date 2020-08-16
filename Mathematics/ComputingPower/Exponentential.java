package Mathematics.ComputingPower;

/* Brute Force Approach :

    Finding the exponentation of x ^ n 

    Time Complexitity: O(n)
    
*/

public class Exponentential {

    public static void main(String[] args) {

        System.out.println(computeExponential(2, 3));

    }

    static long computeExponential(int x, int n) {

        long result = 1;

        if (n == 0)
            return (long) 1;

        if (n == 1)
            return (long) n;

        for (int i = 1; i <= n; i++) {
            result = result * x;
        }

        return result;

    }

}