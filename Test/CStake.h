#pragma once
#ifndef CSTAKE_H
#define CSTAKE_H

#include <iostream>
class CStake
{
public:
    CStake() {}
    CStake(int s) : size(s)
    {
        this->s = new int[size];
        for (int i = 0; i < size; ++i)
        {
            this->s[i] = 0;
        }
    }
    ~CStake()
    {
        delete[] s;
    }
    void apply_size(int s);
    int pop();
    int push(int val);
    void clear();

private:
    int size;
    int* s;
    int p = 0;
};

#endif // CSTAKE_H
