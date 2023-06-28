#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
    Animal *doog = new Dog();
    // Animal *caat = new Animal();

    doog->makeSound();
    system("leaks -q abstractclass");
}