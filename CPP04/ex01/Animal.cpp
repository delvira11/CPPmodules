#include "Animal.hpp"


Animal::Animal() {
    std::cout << "Animal default constructor called" << std::endl;
    this->type = "";
}

Animal::Animal(Animal &copy) {
    std::cout << "Animal copy constructor called" << std::endl;
    *this = copy;
}

Animal::~Animal() {
    std::cout << "Animal destructor called" << std::endl;
}

Animal &Animal::operator=(Animal &copy) {
    std::cout << "Animal assignment operator called" << std::endl;
    this->type = copy.type;
    return *this;
}

std::string Animal::getType() const {
    return this->type;
}

void Animal::makeSound() const {
    std::cout << "undefined animal sound" << std::endl;
}
