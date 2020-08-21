package Array.Basic;

public class ReverseArray {
    public static void main(String[] args) {
        int[] arr = new int[10];

        for (int i = 1; i < 10; i++)
            arr[i] = i;

        // Rotate Array
        int temp;
        for (int i = 0; i < 5; i++) {
            temp = arr[i];

            arr[i] = arr[9 - i];
            arr[9 - i] = temp;

        }

        for (int i = 0; i < 10; i++) {
            System.out.print(arr[i] + " ");
        }

        System.out.println();

    }
}