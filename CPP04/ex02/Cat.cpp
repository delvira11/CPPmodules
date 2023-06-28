#include "Cat.hpp"

Cat::Cat() : Animal()
{
    std::cout << "Cat default constructor called" << std::endl;
    this->type = "Cat";
    this->brain = new Brain();
}

Cat::Cat(Cat &copy) {
    std::cout << "Cat copy constructor called" << std::endl;
    *this = copy;
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
    delete this->brain;
}

Cat &Cat::operator=(Cat &copy)
{
    std::cout << "Cat assignment operator called" << std::endl;
    this->type = copy.type;
    this->brain = copy.brain;
    return *this;
}

// std::string Cat::getType() const
// {
//     return this->type;
// }

void Cat::makeSound() const
{
    std::cout << "miau" << std::endl;
}

