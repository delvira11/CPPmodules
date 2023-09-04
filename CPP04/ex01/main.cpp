#include "Cat.hpp"

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

    std::cout << "-------------------------------" << std::endl;

    Cat Basic;
    std::cout << "-------------------------------" << std::endl;

    Cat tmp = Basic;
    std::cout << "-------------------------------" << std::endl;
    Cat *d = new Cat(); 
    Animal *b = d;
    delete b;

}