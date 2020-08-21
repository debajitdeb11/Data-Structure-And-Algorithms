package Array.MaximumCircularSubArray;

import java.util.ArrayList;
import java.util.List;

class MaxCircularSubArray {

    public static void main(String[] args) {

        ArrayList<Integer> list = new ArrayList<>();

        list.add(5);
        list.add(-2);
        list.add(3);
        list.add(4);

    }

    static int maxSubArray(ArrayList<Integer> list) {

        int maxLength = 1;
        int max_sum = 0;

        for (int i = 0; i < list.size(); i++) {
            max_sum = max_sum + list.get(i);

        }

    }

}