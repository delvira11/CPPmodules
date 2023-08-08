#include <iostream>

template <typename T>

void    swap(T &first_value, T &second_value)
{
    T aux;

    aux = first_value;
    first_value = second_value;
    second_value = aux;
}

template <typename T>

T   min(T first_value, T second_value)
{
    if (first_value < second_value)
        return first_value;
    else
        return second_value;
}

template <typename T>

T   max(T first_value, T second_value)
{
    if (first_value > second_value)
        return first_value;
    else
        return second_value;
}