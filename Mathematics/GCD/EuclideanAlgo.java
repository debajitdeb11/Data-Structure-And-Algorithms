/* Computation of GCD using Euclidean Algorithm */

class EuclideanAlgo {

    public static void main(String[] args) {

        System.out.println(gcd(4, 6));

    }

    static int gcd(int a, int b) {

        while (a != b) {
            if (a > b) {
                a = a - b;
            } else {
                b = b - a;
            }

        }
        return a;

    }

}