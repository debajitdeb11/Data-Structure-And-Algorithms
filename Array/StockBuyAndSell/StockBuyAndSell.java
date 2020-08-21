package Array.StockBuyAndSell;

class StockBuyAndSell {

    public static void main(String[] args) {

        int[] arr = { 1, 5, 3, 8, 2 };

        System.out.println(maxProfit(arr, 0, arr.length) + "");

    }

    static int maxProfit(int arr[], int start, int end) {
        if (end <= start)
            return 0;

        int profit = 0;

        for (int i = 0; i < end; i++) {
            for (int j = i + 1; j < end; j++) {
                if (arr[j] > arr[i]) {
                    int current_profit = arr[j] - arr[i] + maxProfit(arr, start, i - 1) + maxProfit(arr, j + 1, end);

                    profit = Math.max(profit, current_profit);
                }
            }
        }
        return profit;
    }

}