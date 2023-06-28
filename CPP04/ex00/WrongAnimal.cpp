#include "WrongAnimal.hpp"


WrongAnimal::WrongAnimal()
{
    std::cout << "WrongAnimal default constructor called" << std::endl;
    this->type = "";
}

WrongAnimal::WrongAnimal(WrongAnimal &copy)
{
    std::cout << "WrongAnimal copy constructor called" << std::endl;
    *this = copy;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal &copy)
{
    std::cout << "WrongAnimal assignment operator called" << std::endl;
    this->type = copy.type;
    return *this;
}

std::string WrongAnimal::getType() const
{
    return this->type;
}

void WrongAnimal::makeSound() const
{
    std::cout << "undefined WrongAnimal sound" << std::endl;
}
