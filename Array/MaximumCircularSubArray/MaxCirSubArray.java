// TODO: incomplete code

package Array.MaximumCircularSubArray;

class MaxCirSubArray {

    public static void main(String[] args) {

        int[] arr = { 5, -2, 3, 4 };

        System.out.println(maxCirSum(arr));

    }

    static int maxCirSum(int arr[]) {

        int n = arr.length;

        int res = arr[0];

        for (int i = 0; i < n; i++) {
            int max_sum = arr[i];
            int curr_sum = arr[i];

            for (int j = 1; j < n; j++) {
                int index = (i + j) % n;

                curr_sum += arr[index];

                curr_sum = Math.max(curr_sum, max_sum);

            }

            res = Math.max(res, max_sum);

        }

        return res;

    }

}