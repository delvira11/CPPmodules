


#include "Serializer.hpp"

int main()
{
    Data *stc;
    uintptr_t test;

    stc[0].a = 10;
    stc[0].b = 'b';
    std::cout << stc->a << std::endl;
    std::cout << stc->b << std::endl;
    //Serializer::serialize(stc);

}