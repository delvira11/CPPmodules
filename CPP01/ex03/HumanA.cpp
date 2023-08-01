#include "HumanA.hpp"
#include "Weapon.hpp"
#include <iostream>

HumanA::HumanA(std::string name, Weapon &human_weapon): weapon(human_weapon)
{
    this->name = name;
}

void    HumanA::attack()
{
    std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}

HumanA::~HumanA()
{
    std::cout << "HumanA destructor called" << std::endl;
}
