package Sorting.JAVASort.Compare;

import java.util.Arrays;

public class Test {

    public static void main(String[] args) {
        Point arr[] = { new Point(10, 20), new Point(100, 1000), new Point(3, 6) };

        Arrays.sort(arr);

        for (Point p : arr)
            System.out.println(p.x + ", " + p.y);
    }

}
