#include <cstdlib>
#include <ctime>
#include <iostream>
#include "easyfind.hpp"

int main()
{
    std::vector<int> vec;
    std::list<int> list;
    std::deque<char> deque;

    std::srand(static_cast<unsigned int>(std::time(0)));
    
    //VECTOR OF INTEGERS

    for (int i = 0; i < 100; ++i)
    {
        vec.push_back(i);
    }
    try
    {
        std::vector<int>::iterator result;
        result = easyfind(vec, 90);
        std::cout << *result << std::endl;
    }
    catch(std::exception &ex)
    {
        std::cout << ex.what() << std::endl;
    }

    //LIST OF INTEGERS

    for (int i = 0; i < 100; ++i)
    {
        list.push_back(i);
    }
    try
    {
        std::list<int>::iterator result_list;
        result_list = easyfind(list, 10);
        std::cout << *result_list << std::endl;
    }
    catch(std::exception &ex)
    {
        std::cout << ex.what() << std::endl;
    }

    //QUEUE OF CHARS
    
    for (int i = 33; i < 120; ++i)
    {
        deque.push_back(i);
    }
    try
    {
        std::deque<char>::iterator result_list;
        result_list = easyfind(deque, 'a');
        std::cout << *result_list << std::endl;
    }
    catch(std::exception &ex)
    {
        std::cout << ex.what() << std::endl;
    }

    //for (int i = 0; i < 100; ++i)
    //{
      //  list.push_back(std::rand());
        //std::cout << vec[i] << std::endl;
    //}
    return 0;
}