#include "Array.hpp"

int main()
{
    try
    {
    Array<int> data;
    Array<int> data_1(5);
    Array<int> data_2(data_1);
    Array<int> data_3;
    data_3 = data_2;

    data_1[0] = 3;
    data_1[4] = 2;

    std::cout << "size: " <<data_1.size() << std::endl;
    for (unsigned int i = 0; i < data_1.size(); i++)
    {
    std::cout << "array position " << i << ": " << data_1[i] << std::endl;
    }
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    
}