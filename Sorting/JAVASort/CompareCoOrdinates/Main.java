package Sorting.JAVASort.CompareCoOrdinates;

import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

/**
 * Main
 */
public class Main {

    public static void main(String[] args) {

        List<Coordinate> cList = new ArrayList<Coordinate>();

        cList.add(new Coordinate(5, 10));
        cList.add(new Coordinate(7, 10));
        cList.add(new Coordinate(65, 10));
        cList.add(new Coordinate(3, 10));
        cList.add(new Coordinate(1, 10));

        for (Coordinate i : cList)
            System.out.println(i.getX() + ", " + i.getY());

        System.out.println("--- After Sorting ---");

        Collections.sort(cList, new Mycmp());

        for (Coordinate c : cList)
            System.out.println(c.getX() + ", " + c.getY());

        System.out.println();

    }

}