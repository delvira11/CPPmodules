#include <iostream>
#include <vector>
#include <queue>
#include <list>
#include <deque>
#include <stack>


template <typename T>

int   easyfind(T p1, int p2)
{
    int i;

    i = 0;
    if (p1.empty())
        throw "empty array";
    while(i < p1.size())
    {
        if (p1[i] == p2)
            return (i);
        i++;
    }
    throw "p2 not found";
}