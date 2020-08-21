/* Optimized Solution to find the Leader in an array */

// As the output of the function is in reverse order
// so we use Stack to store the data and pop() the
// data in correct order

/* 
    Time Complexitity of the solution is O(n).
    Auxilary Space required is O(n).
*/

package Array.LeaderInArray;

import java.util.Stack;

class LeaderOptimized {

    public static void main(String[] args) {

        Stack<Integer> s = new Stack<>();

        int[] arr = { 7, 10, 4, 10, 6, 5, 2 };

        int n = arr.length - 1;

        int current_leader = arr[n];

        s.push(current_leader);

        for (int i = n - 1; i >= 0; i--) {
            if (arr[i] > current_leader) {
                current_leader = arr[i];
                s.push(current_leader);
            }
        }

        while (!s.isEmpty()) {
            System.out.print(s.pop() + " ");
        }

        System.out.println();

    }

    static void leader(int arr[]) {

    }

}