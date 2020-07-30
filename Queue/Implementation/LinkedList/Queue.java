/* Implementation of Queue */
/*

Operations on Queue:
Mainly the following four basic operations are performed on queue:

Enqueue: Adds an item to the queue. If the queue is full,
         then it is said to be an Overflow condition.
Dequeue: Removes an item from the queue. 
        The items are popped in the same order in which they are pushed.
         If the queue is empty, then it is said to be an Underflow condition.
Front: Get the front item from queue.
Rear: Get the last item from queue.

queue

*/

package Queue.Implementation.LinkedList;

public class Queue {
    int front;
    int rear;
    int size;
    int capacity;
    int arr[];

    public Queue(int capacity) {
        this.capacity = capacity;
        this.front = this.size = 0;
        this.rear = capacity - 1;
        this.arr = new int[capacity];
    }

    // To check if the queue is full or not
    boolean isFull() {
        return (size == capacity) ? true : false;
    }

    // To check if the queue is empty or not
    boolean isEmpty() {
        return (size == 0) ? true : false;
    }

    // To add items to the queue
    void enqueue(int item) {
        if (isFull()) {
            System.out.println("Queue Overflow");
            return;
        } else {
            rear = (rear + 1) % capacity;
            arr[rear] = item;
            size++;

            System.out.println(item + "enqueue to the queue");
            return;
        }
    }

    // Method to remove an item
    // from the queue
    int dequeue() {
        if (isEmpty()) {
            return Integer.MIN_VALUE;
        } else {
            int item = arr[front];
            front = (front + 1) % capacity;
            size--;
            return item;
        }
    }

    // To get front of the queue
    int front() {
        if (isEmpty()) {
            System.out.println("Queue is empty");
            return Integer.MIN_VALUE;
        }

        return arr[front];
    }

    // To get rear of the queue
    int rear() {
        if (isEmpty()) {
            System.out.println("Queue is Empty");
            return Integer.MIN_VALUE;
        }

        return arr[rear];
    }

    public static void main(String[] args) {

        Queue q = new Queue(5);
        q.enqueue(1);
        q.enqueue(12);
        q.enqueue(13);
        q.enqueue(14);
        q.enqueue(16);
        q.enqueue(15);

        System.out.println("Front: " + q.front());
        System.out.println("Rear: " + q.rear());

        q.dequeue();
        q.dequeue();
        q.dequeue();
        q.dequeue();
        q.dequeue();
        q.dequeue();
        q.dequeue();
        q.dequeue();
        q.dequeue();

        System.out.println("Empty: " + q.isEmpty());

    }

}