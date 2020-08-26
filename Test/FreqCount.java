package Test;

class FreqCount {

    static int[] frequencyCount(int arr[], int n) {

        int freq = 0;
        int[] t = new int[n];
        for (int i = 1; i < n; i++) {

            freq = 0;

            for (int j = 0; j < n; j++) {
                if (i == arr[j])
                    ++freq;
            }

            t[i - 1] = freq;

        }

        return t;

    }

    public static void main(String[] args) {

        int[] arr = { 3, 3, 3, 3 };
        int n = arr.length;

        int[] t = frequencyCount(arr, n);

        for (int i = 0; i < n; i++)
            System.out.print(t[i]);

        System.out.println();

    }

}