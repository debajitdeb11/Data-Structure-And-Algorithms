package Stack.SpecialStack;

public class SpecialStack extends Stack {

    private Stack min;

    public SpecialStack() {
        this.min = new Stack();
    }

    /*
     * SpecialStack's member method to insert an element to it. This method makes
     * sure that the min stack is also updated with appropriate minimum values
     */
    @Override
    public boolean push(int data) {

        if (isEmpty()) {
            super.push(data);
            min.push(data);
            return true;
        } else {
            super.push(data);
            int x = min.pop();
            min.push(x);

            if (data > x) {
                min.push(x);
                return true;
            } else {
                min.push(data);
                return true;
            }

        }

    }

    /*
     * SpecialStack's member method to insert an element to it. This method makes
     * sure that the min stack is also updated with appropriate minimum values
     */
    @Override
    public int pop() {
        int x = super.pop();
        min.pop();
        return x;
    }

    /*
     * SpecialStack's member method to get minimum element from it.
     */
    public int getMin() {
        int x = min.pop();
        min.push(x);
        return x;
    }

    public static void main(String[] args) {
        SpecialStack s = new SpecialStack();
        s.push(10);
        s.push(20);
        s.push(30);
        s.push(40);
        s.push(50);
        s.push(1);

        System.out.println("Minimum : " + s.getMin());

        s.pop();

        System.out.println("Minimum : " + s.getMin());
    }

}