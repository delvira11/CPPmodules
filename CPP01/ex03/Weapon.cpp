
#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
    std::cout << "Weapon constructor called" << std::endl;
    this->type = type;
}

Weapon::~Weapon()
{
    std::cout << "Weapon destructor called" << std::endl;
}

void    Weapon::setType(std::string settype)
{
    type = settype;
}

const std::string  &Weapon::getType()
{
    return (type);
}