package Sorting.JAVASort.Compare;

public class Integer implements Comparable<Integer> {
    int x;

    Integer(int x) {
        this.x = x;
    }

    @Override
    public int compareTo(Integer i) {
        return i.x - this.x;
    }
}
