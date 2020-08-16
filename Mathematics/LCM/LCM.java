package Mathematics.LCM;

/*

Optimized Algorith for finding LCM using Euclidean Algorithm

         LCM x HCF = a x b 


*/

public class LCM {

    public static void main(String[] args) {

        System.out.println(lcm(6, 4));

    }

    static int gcd(int a, int b) {
        if (b == 0)
            return a;

        return gcd(b, a % b);
    }

    static int lcm(int a, int b) {

        /* LCM x HCF = a x b */

        return (a * b) / gcd(a, b);
    }

}