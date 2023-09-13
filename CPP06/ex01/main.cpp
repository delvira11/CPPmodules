


#include "Serializer.hpp"

int main()
{
    Data *stc = new(Data);
    Data *testss;
    uintptr_t test;

    stc[0].a = 10;
    stc[0].b = 'b';
    std::cout << stc->a << std::endl;
    std::cout << stc->b << std::endl;

    std::cout << "first variable " << stc << std::endl;
    test = Serializer::serialize(stc);
    std::cout << "Serialized to uint " << test << std::endl;
    testss = Serializer::deserialize(test);
    std::cout << "deserialized to data " << testss << std::endl;


}