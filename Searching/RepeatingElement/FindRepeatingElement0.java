// Find repeating element in an array
// when array start from 0th-index

// Time Complexity: O(N)

package Searching.RepeatingElement;

class FindRepeatingElement0 {

    public static void main(String[] args) {

        int[] arr = { 0, 1, 2, 3, 4, 5, 6, 6, 6 };

        System.out.println(findRepeatingElement0(arr));

    }

    static int findRepeatingElement0(int arr[]) {

        int slow = arr[0] + 1;
        int fast = arr[0] + 1;

        do {

            slow = arr[slow] + 1;

            fast = arr[arr[fast] + 1] + 1;

        } while (slow != fast);

        slow = arr[0] + 1;

        while (slow != fast) {

            slow = arr[slow] + 1;
            fast = arr[fast] + 1;
        }

        return slow - 1;
    }

}