package Sorting.InsertionSort;

class InsertionSort {
    public static void main(String[] args) {
        
        int [] arr = {5, 4 , 3, 2, 1};

        System.out.println("Before Sorting:");
        for (int i : arr)
            System.out.print(i + " ");

        System.out.println();

        insert_sort(arr);   // Perform Sorting

        System.out.println("After Sorting:");
        for (int i : arr)
            System.out.print(i + " ");

        System.out.println();
        
    }

    private static void insert_sort (int [] arr) {
        for (int i = 1; i < arr.length; i++) {
            int key = arr[i];
            int j = i -1;

            while (j >= 0 && arr[j] > key) {
                arr[j+1] = arr[j];
                j--;
            }
            arr[j + 1] = key;
        }
    }

}