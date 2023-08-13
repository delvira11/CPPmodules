#include "Span.hpp"
#include <algorithm>

Span::Span(unsigned int N)
{
    this->N = N;
}

Span::~Span()
{
}

Span::Span(Span &copy)
{
    this->N = copy.N;
    this->vec = copy.vec;
}
Span &Span::operator=(Span &copy)
{
    this->N = copy.N;
    this->vec = copy.vec;
    return *this;
}


void    Span::printVec()
{
    for (std::vector<int>::iterator i = this->vec.begin(); i != this->vec.end(); i++)
    {
        std::cout << *i << std::endl;
    }
}

void    Span::addNumber(int number)
{
    if (this->vec.size() < this->N)
        this->vec.push_back(number);
    else
        throw excep();
}

void    Span::addMultiNums(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
    if ((long unsigned int)(end - begin) <= this->N - this->vec.size())
        this->vec.insert(this->vec.end(), begin, end);
    else
        throw excep();
}

const char *Span::excep::what() const throw()
{
    return ("the span is already full");
}

int Span::shortestSpan()
{
    if (this->vec.size() <= 1)
        throw excep();
    int span = 2147483647;
    std::vector<int> sort_vec;

    sort_vec = this->vec;
    std::sort(sort_vec.begin(), sort_vec.end());

    for (std::vector<int>::iterator i = sort_vec.begin(); (i + 1) != sort_vec.end(); i++)
    {
        int max_element = *std::max_element(i, i + 2);
        int min_element = *std::min_element(i, i + 2);
        if (max_element - min_element < span)
            span = max_element - min_element;
    }
    return (span);
}

int Span::longestSpan()
{
    int span;

    if (this->vec.size() <= 1)
        throw excep();

    span = (*std::max_element(this->vec.begin(), this->vec.end()) - *std::min_element(this->vec.begin(), this->vec.end()));
    return (span);
}