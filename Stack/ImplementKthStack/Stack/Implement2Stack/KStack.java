/* Implement K stacks in an array */

package Stack.Implement2Stack;
import java.util.Arrays;

class KStack {
    
    private int [] arr;
    private int [] top;
    private int [] next;

    private int k, freeTop, capacity;

    public KStack(int k, int capacity) {
        this.k = k;
        this.capacity = capacity;
        this.top = new int[k];
        Arrays.fill(top, -1);
        this.next = new int[capacity];
        this.freeTop = 0;

        for(int i = 0; i < capacity - 1; i++)
            next[i] = i + 1;

        next[capacity - 1] = -1;
    }


    void push(int x, int sn) {
        int i = freeTop;
        freeTop = next[i];
        next[i] = top[sn];
        top[sn] = i;
        arr[i] = x;
    }
    
    int pop(int sn) {
        int i = top[sn];
        top[sn] = next[i];
        next[i] = freeTop;
        freeTop = i;
        return arr[i];
    }

}
