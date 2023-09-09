



#include <iostream>
#include <cstdint>

typedef struct Data
{
    int a;
    char b;
} Data ;

class Serializer
{

    private:
        Serializer();
    public:
        ~Serializer();

        static uintptr_t serialize(Data* ptr);
        static Data* deserialize(uintptr_t raw);

};