#ifndef CQUEUE_H
#define CQUEUE_H

#include <iostream>
class CQueue
{
public:
    CQueue() {}
    CQueue(int s) : size(s)
    {
        this->q = new int[size];
        front = 0;
        rear = 0;
    }
    ~CQueue()
    {
        delete[] q;
    }
    void apply_size(int s);
    int pop();
    int push(int val);
    void clear();
    int getLen() const;
private:
    int size;
    int* q;
    int front = 0;
    int rear = 0;
};


#endif