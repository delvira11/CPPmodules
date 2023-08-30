#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    std::cout << "ScavTrap default constructor called" << std::endl;
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << "ScavTrap name constructor called" << std::endl;
    this-> name = name;
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;
}

ScavTrap::ScavTrap(ScavTrap &copy) : ClapTrap(copy)
{
    std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor called" << std::endl;
}

void    ScavTrap::printName()
{
    std::cout << std::endl;
    std::cout << this->name << std::endl;
    std::cout << this->hitPoints << std::endl;
    std::cout << this->energyPoints << std::endl;
    std::cout << this->attackDamage << std::endl;

}

ScavTrap & ScavTrap::operator=(ScavTrap const & copy)
{
    std::cout << "ScavTrap assignation operator called" << std::endl;
    this->name = copy.name;
    this->hitPoints = copy.hitPoints;
    this->energyPoints = copy.energyPoints;
    this->attackDamage = copy.attackDamage;
    return (*this);
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << this->name << " is now in Gate keeper mode" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if (this->energyPoints > 0 && this->hitPoints > 0)
    {
    std::cout << "ScavTrap " << this->name << " attacks " << target
     << " causing " << this->attackDamage << " points of damage!" << std::endl;
    this->energyPoints -= 1;
    }
    else
    {
        std::cout << "ScavTrap " << this->name 
        << " couldn't attack cause it has no energy points left or it's dead!" << std::endl;
    }
}
