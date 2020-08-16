package Mathematics.LCM;

/* Brute Force approach for the computation of LCM */

public class LCMBruteForceApproach {

    public static void main(String[] args) {

        System.out.println(lcm(4, 6));

    }

    static int lcm(int a, int b) {

        int res = Math.max(a, b);

        while (true) {
            if (res % a == 0 && res % b == 0) {
                break;
            }
            res++;
        }

        return res;
    }

}