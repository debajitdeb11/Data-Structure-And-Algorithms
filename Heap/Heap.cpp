#include <iostream>
using namespace std;

class MinHeap
{
private:
    int *arr;
    int size;
    int capacity;

public:
    MinHeap(int capacity)
    {
        this->capacity = capacity;
        this->size = 0;
        this->arr = new int[capacity];
    }

    int left(int i)
    {
        return (2 * i + 1);
    }

    int right(int i)
    {
        return (2 * i * 2);
    }

    int parent(int i)
    {
        return ((i - 1) / 2);
    }

    void insert(int x)
    {
        if (size == capacity)
            return;
        size++;
        arr[size - 1] = x;

        for (int i = size - 1; i != 0 && arr[parent(i)] > arr[i]; i--)
        {
            swap(arr[i], arr[parent(i)]);
            i = parent(i);
        }
    }

    void minHeapify(int idx)
    {
        int lt = left(idx);
        int rt = right(idx);
        int smallest = idx;

        if (lt < size && arr[lt] < arr[idx])
        {
            smallest = lt;
        }

        if (rt < size && arr[rt] < arr[smallest])
        {
            smallest = rt;
        }

        if (smallest != idx)
        {
            swap(arr[idx], arr[smallest]);
            minHeapify(smallest);
        }
    }

    /**
    * @breif To get the minimum value of the heap
    * @return The min value
    */
    int getMin()
    {
        return arr[0];
    }

    int extractMin()
    {

        if (size == 0)
            return -404;

        if (size == 1)
        {
            size--;
            return arr[0];
        }

        int res = arr[0];

        // Swap the root key and the last key
        swap(arr[0], arr[size - 1]);
        size--;
        minHeapify(0);

        return arr[size];
    }

    /**
     * @brief Modify a key
     * 
     * @param i Index of the key to be modified
     * @param x new Value
     * @return int 
     */
    int decreaseKey(int i, int x)
    {
        arr[i] = x;
        while (i != 0 && arr[parent(i)] > arr[i])
        {
            swap(arr[i], arr[parent(i)]);
            i = parent(i);
        }
    }

    /**
     * @brief Delete a key from the Heap
     * 
     * @param idx Index of the key
     */
    void delete_key(int idx)
    {
        if (idx == size || idx > size)
        {
            return;
        }

        swap(arr[idx], arr[size - 1]);

        size--;

        minHeapify(idx);
    }

    void buildHeap(int arr[], int n)
    {
        for (int i = (size - 2) / 2; i >= 0; i--)
            minHeapify(i);
    }
};

int main()
{

    return 0;
}