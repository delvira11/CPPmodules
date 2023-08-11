#include "Span.hpp"
#include <cstdlib>
#include <ctime>

int main()
{
    Span span(20000);
    std::vector<int> random_nums;
    std::srand(std::time(0));

    for (int i = 0 ; i < 15000; i++)
    {
        random_nums.push_back(std::rand());
    }
    try
    {
    span.addNumber(6);
    //span.addNumber(9);
    //span.addNumber(17);
    //span.addNumber(3);
    //span.addNumber(11);
    //span.addNumber(11);
    //span.addNumber(23);
    //span.addMultiNums(random_nums.begin(), random_nums.end());
    std::cout << "shortest span: " << span.shortestSpan() << std::endl;
    std::cout << "longest span: " << span.longestSpan() << std::endl;
    //span.printVec();
    }
    catch (std::exception &ex)
    {
        std::cout << ex.what() << std::endl;
    }


}