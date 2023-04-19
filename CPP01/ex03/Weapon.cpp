
#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
    this->type = type;
}

void    Weapon::setType(std::string settype)
{
    type = settype;
}

const std::string  &Weapon::getType()
{
    return (type);
}