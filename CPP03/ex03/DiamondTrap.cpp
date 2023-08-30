#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name)
{
    std::cout << "DiamondTrap name constructor called" << std::endl;
    this->name = name;
    ClapTrap::name = (name + "_clap_name");
    FragTrap::hitPoints = 100;
    ScavTrap::energyPoints = 50;
    FragTrap::attackDamage = 30;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap destructor called" << std::endl;
}
void    DiamondTrap::printInfo()
{
    std::cout << "name: " << this->name << std::endl;
    std::cout << "ClapTrap name: " << ClapTrap::name << std::endl;
    std::cout << "hitpoints: " << this->hitPoints << std::endl;
    std::cout << "energypoints: " << this->energyPoints << std::endl;
    std::cout << "attackdmg: " << this->attackDamage << std::endl;
}

void DiamondTrap::whoAmI()
{
    std::cout << "name: " << this->name << std::endl;
    std::cout << "ClapTrap name: " << ClapTrap::name << std::endl;  
}
