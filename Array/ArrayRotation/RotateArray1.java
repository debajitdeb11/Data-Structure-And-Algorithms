/*
    Rotation of an Array one-by-one
*/

package Array.ArrayRotation;

import java.util.Scanner;

public class RotateArray1 {
    private static Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) {

        int t, n, d, val;

        t = scanner.nextInt();
        scanner.nextLine();

        while (t != 0) {
            n = scanner.nextInt();
            scanner.nextLine();
            d = scanner.nextInt();
            scanner.nextLine();

            int[] arr = new int[n];

            for (int i = 0; i < n; i++) {
                val = scanner.nextInt();
                arr[i] = val;
            }

            scanner.nextLine();

            printArr(arr);

            System.out.print("Select: \nL. => Left Shift\nR. => Right Shift\n");

            String input = scanner.nextLine().trim().toUpperCase();

            switch (input) {

                case "L":
                    rotateLeft(arr, d, n);
                    printArr(arr);
                    break;

                case "R":
                    rotateRight(arr, d, n);
                    printArr(arr);
                    break;
            }
            t--;

        }
        scanner.close();
    }

    static void rotateLeft(int arr[], int d, int n) {
        for (int i = 0; i < d; i++) {
            leftRotateByOne(arr, n);
        }
    }

    static void leftRotateByOne(int arr[], int n) {
        int temp = arr[0];
        int i;
        for (i = 0; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        arr[i] = temp;
    }

    static void rotateRight(int arr[], int d, int n) {
        for (int i = 0; i < d; i++) {
            rightRotatebyOne(arr, n);
        }
    }

    static void rightRotatebyOne(int arr[], int n) {
        int temp = arr[n - 1];
        int i;
        for (i = 1; i <= n - 1; i++) {
            arr[n - i] = arr[n - 1 - i];
        }
        arr[0] = temp;
    }

    static void printArr(int arr[]) {
        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i] + " ");
        }
        System.out.println();
    }

}