#pragma once
#ifndef CRANDOM_H
#define CRANDOM_H

#include <iostream>
#include <random>
#include <ctime>

class CRandom
{
public:
    CRandom()
        : eng(std::random_device{}()) // 用 random_device 作为种子
    {
    }
    ~CRandom() = default;

    int getRandomInt(int min, int max)
    {
        std::uniform_int_distribution<int> dist(min, max);
        return dist(eng);
    }

    float getRandomFloat(float min, float max)
    {
        std::uniform_real_distribution<float> dist(min, max);
        return dist(eng);
    }

private:
    std::default_random_engine eng;
};


#endif