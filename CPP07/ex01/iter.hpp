#include <iostream>


template <typename T>

void    iter(T *array, int len, void (*func)(T &a))
{
    for (int i = 0; i < len; i++)
    {
        func(array[i]);
    }
}

template <typename T>

void    sum_1(T &num)
{
    num += 1;
}