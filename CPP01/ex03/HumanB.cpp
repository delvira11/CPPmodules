#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    this->name = name;
}

HumanB::~HumanB()
{
    std::cout << "HumanB destructor called" << std::endl;
}

void    HumanB::setWeapon(Weapon &setweapon)
{
    this->weapon = &setweapon;
}


void    HumanB::attack()
{
    std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}