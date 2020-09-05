/*
    Sorting in Java for Primitive Types
*/

package Sorting.JAVASort;

import java.util.Arrays;

class ForPrimitiveTypes {

    public static void main(String[] args) {
        char[] a = { 'a', 'A', 'b', 'B', 'c', 'd', 'E' };

        for (char i : a)
            System.out.print(i);

        System.out.println();

        Arrays.sort(a);

        for (char i : a)
            System.out.print(i);

        System.out.println();

    }

}