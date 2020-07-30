package Queue.PriorityQueue;

import java.util.Iterator;
import java.util.PriorityQueue;

public class PQueue {

    PriorityQueue<String> pq;

    public PQueue() {
        this.pq = new PriorityQueue<>();
    }

    void add(String s) {
        pq.add(s);
    }

    void display() {
        System.out.println("The queue elements are: ");
        Iterator it = pq.iterator();

        while (it.hasNext()) {
            System.out.print("\t" + it.next());
        }
    }

    void peek() {
        System.out.println("Printing the most priority Element: " + pq.peek());
    }

    public static void main(String[] args) {
        PQueue pq = new PQueue();
        pq.add("Hello");
        pq.add("BYE");
        pq.add("Take Care");

        pq.display();

        pq.peek();

    }

}