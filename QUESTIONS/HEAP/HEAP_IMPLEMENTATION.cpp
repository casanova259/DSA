#include <iostream>
#include <vector>
using namespace std;
class maxHeap
{
    vector<int> heap;

public:
    // Insert element
    void push(int x)
    {
        heap.push_back(x);

        int index = heap.size() - 1;

        // Heapify Up
        while (index > 0)
        {
            int parent = (index - 1) / 2;

            if (heap[parent] < heap[index])
            {
                swap(heap[parent], heap[index]);
                index = parent;
            }
            else
            {
                break;
            }
        }
    }

    // Remove top element
    void pop()
    {

        if (heap.empty())
            return;

        // Put last element at root
        heap[0] = heap.back();
        heap.pop_back();

        int index = 0;
        int n = heap.size();

        // Heapify Down
        while (true)
        {
            int left = 2 * index + 1;
            int right = 2 * index + 2;

            int largest = index;

            if (left < n && heap[left] > heap[largest])
                largest = left;

            if (right < n && heap[right] > heap[largest])
                largest = right;

            if (largest == index)
                break;

            swap(heap[index], heap[largest]);
            index = largest;
        }
    }

    // Return max element
    int peek()
    {

        if (heap.empty())
            return -1;

        return heap[0];
    }

    // Return heap size
    int size()
    {
        return heap.size();
    }
};
int main()
{
    // created by manik sharma

    return 0;
}