#include "CQueue.h"
void CQueue::apply_size(int s)
{
    size = s;
    this->q = new int[size];
    front = 0;
    rear = 0;
}
int CQueue::pop()
{
    if (front != rear)
    {
        int val = q[front];
        front = (front + 1) % size;
        return val;
    }
    return -1; // Indicate queue is empty
}
int CQueue::push(int val)
{
    int next_rear = (rear + 1) % size;
    if (next_rear != front)
    {
        q[rear] = val;
        rear = next_rear;
        return 0; // Success
    }
    return -1; // Indicate queue overflow
}
void CQueue::clear()
{
    front = 0;
    rear = 0;
    for (int i = 0; i < size; ++i)
    {
        q[i] = 0;
    }
}
int CQueue::getLen() const
{
    if (rear >= front)
    {
        return rear - front;
    }
    else
    {
        return size - (front - rear);
    }
}