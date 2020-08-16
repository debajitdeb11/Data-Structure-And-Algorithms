package Mathematics.ComputingPower;

/* 

Reccursive Solution:

Time Complexitity: O(log n) 

*/

public class MethodOfExponentation {

    public static void main(String[] args) {

        System.out.println(expt(2, 32));

    }

    static long expt(int x, int n) {

        // Base Case:
        if (n == 0)
            return 1;

        if (n == 1)
            return x;

        long temp = expt(x, n / 2);

        temp = temp * temp;

        if (n % 2 != 0)
            return temp * x;

        return temp;
    }

}