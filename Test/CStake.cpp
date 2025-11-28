#include "CStake.h"

void CStake::apply_size(int s)
{
    size = s;
    this->s = new int[size];
    for (int i = 0; i < size; ++i)
    {
        this->s[i] = 0;
    }
}

int CStake::pop()
{
    if (p > 0)
    {
        --p;
        return s[p];
    }
    return -1; // Indicate stack is empty
}

int CStake::push(int val)
{
    if (p < size)
    {
        s[p] = val;
        ++p;
        return 0; // Success
    }
    return -1; // Indicate stack overflow
}

void CStake::clear()
{
    p = 0;
    for (int i = 0; i < size; ++i)
    {
        s[i] = 0;
    }
}

