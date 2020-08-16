/*

    Given a rope of length n. You need to find the maximun
    no of pieces you can make that the length of every piece
    is in set {a, b, c} for given 3 values a, b, c

*/

package Recursion.MaximumNumberofPieces;

class MaximumNoOfPieces {

    public static void main(String[] args) {

        int n = 23;
        int a = 12, b = 11, c = 9;

        System.out.println("Max Number of Pieces: " + maxPieces(n, a, b, c));

    }

    static int maxPieces(int n, int a, int b, int c) {

        // Base case: If the Length of the Rope becomes 0
        if (n == 0)
            return 0;

        // Base Case: If the length of the rope becomes -1
        if (n < 0)
            return -1;

        int res = Math.max(Math.max(maxPieces(n - a, a, b, c), maxPieces(n - b, a, b, c)), maxPieces(n - c, a, b, c));

        // if the result is -1 then, return -1
        if (res == -1)
            return -1;

        // else add +1 to the result if the result is zero
        return 1 + res;

    }

}