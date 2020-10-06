package Sorting.JAVASort.Compare;

import java.util.Arrays;

public class Test2 {
    public static void main(final String[] args) {
        final Integer[] arr = { new Integer(1), new Integer(16), new Integer(13), new Integer(178),
                new Integer(6452131), };

        for (final Integer i : arr)
            System.out.print(i.x + " ");

        System.out.println();

        Arrays.sort(arr);

        for (final Integer i : arr)
            System.out.print(i.x + " ");

        System.out.println();

    }
}
