package Sorting.JAVASort.CompareCoOrdinates;

import java.util.Comparator;

/**
 * Mycmp
 */
public class Mycmp implements Comparator<Coordinate> {

    @Override
    public int compare(Coordinate o1, Coordinate o2) {

        return (o1.getX() - o2.getX());
    }
}