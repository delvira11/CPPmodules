#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal *animalArray[10];

    int i = 0;

    while (i < 5)
    {
        animalArray[i] = new Dog();
        i++;
    }
    while (i < 10)
    {
        animalArray[i] = new Cat();
        i++;
    }

    i = 0;
    while (i < 10)
    {
        std::cout << animalArray[i]->getType() << std::endl;
        i++;
    }

    i = 0;
    while (i < 10)
    {
        delete animalArray[i];
        i++;
    }

}