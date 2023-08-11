#include <iostream>
#include <exception>
#include <vector>

class Span
{
    private:
        unsigned int N;
        std::vector<int> vec;
    public:
        Span(unsigned int N);
        ~Span();
      //  Span(Span &copy);
       // Span &operator=(Span &copy);

        void addNumber(int number);
        void addMultiNums(std::vector<int>::iterator begin, std::vector<int>::iterator end);
        int shortestSpan();
        int longestSpan();
        void printVec();
    
    class excep : public std::exception
    {
        const char *what() const throw();
    };
};