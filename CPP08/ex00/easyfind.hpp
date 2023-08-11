#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <list>
#include <deque>
#include <stack>
#include <exception>

class except: public std::exception
{
    public:
        const char *what() const throw()
        {
            return ("ocurrence was not found");
        }
};

template <typename T>

typename T::iterator   easyfind(T p1, int p2)
{
    typename T::iterator value;
    value = std::find(p1.begin(), p1.end(), p2);
    if (value != p1.end())
        return (value);
    else
        throw except();
}