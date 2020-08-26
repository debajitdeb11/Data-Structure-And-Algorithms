// This approach is used to find the repeating element
// in an array. 

// This approach is valid when the index of array
// starts from 1.

// Time Complexity: O(N)

package Searching.RepeatingElement;

class FindRepeatingElement {

    public static void main(String[] args) {

        int[] arr = { 1, 3, 4, 4, 2, 5, 6 };

        System.out.println(findRepeatingElement(arr));

    }

    static int findRepeatingElement(int arr[]) {

        int slow = arr[0], fast = arr[0];

        do {

            slow = arr[slow];

            fast = arr[arr[fast]];

        } while (slow != fast);

        slow = arr[0];

        while (slow != fast) {

            slow = arr[slow];

            fast = arr[fast];

        }

        return slow;

    }

}