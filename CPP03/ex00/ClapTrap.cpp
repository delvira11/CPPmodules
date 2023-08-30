#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "Default constructor called" << std::endl;
    this->name = "";
    this->hitPoints = 10;
    this->energyPoints = 10;
    this->attackDamage = 0;
}

ClapTrap::ClapTrap( std::string nameparam )
{
    std::cout << "Constructor called" << std::endl;
    this->name = nameparam;
    this->hitPoints = 10;
    this->energyPoints = 10;
    this->attackDamage = 0;
}

ClapTrap::~ClapTrap()
{
std::cout << "Destructor called" << std::endl;
}

ClapTrap::ClapTrap( ClapTrap& copy)
{
    std::cout << "Copy constructor called" << std::endl;
    this->hitPoints = copy.hitPoints;
    this->energyPoints = copy.energyPoints;
    this->attackDamage = copy.attackDamage;
    this->name = copy.name;
}

ClapTrap&  ClapTrap::operator=(ClapTrap &copy)
{
    std::cout << "Assign operator overcharged" << std::endl;
    this->name = copy.name;
    this->hitPoints = copy.hitPoints;
    this->energyPoints = copy.energyPoints;
    this->attackDamage = copy.attackDamage;
    return (*this);
}

void    ClapTrap::printName()
{
    std::cout << this->name << std::endl;

}

void ClapTrap::attack(const std::string& target)
{
    if (this->energyPoints > 0 && this->hitPoints > 0)
    {
    std::cout << "ClapTrap " << this->name << " attacks " << target
     << " causing " << this->attackDamage << " points of damage!" << std::endl;
    this->energyPoints -= 1;
    }
    else
    {
        std::cout << "ClapTrap " << this->name 
        << " couldn't attack cause it has no energy points left or it's dead!" << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "ClapTrap " << this->name << " has taken " 
    << amount << " points of damage" << std::endl;
    this->hitPoints -= amount;
    if (this->hitPoints > 0)
    {
        std::cout << "ClapTrap " << this->name << " has " 
        << this->hitPoints << " hitpoints left" << std::endl;
    }
    else
    {
        std::cout << "ClapTrap " << this->name << " died!" << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->energyPoints > 0 && this->hitPoints > 0)
    {
        std::cout << "ClapTrap " << this->name << " has repaired "
        << amount << " of hitpoints back" << std::endl;
        this->energyPoints -= 1;
        this->hitPoints += amount;
        std::cout << "ClapTrap " << this->name << " has " 
        << this->hitPoints << " hitpoints left" << std::endl;
    }
    else
    {
        std::cout << "ClapTrap " << this->name 
        << " count't repair itself cause it has no energy points left or it's dead" 
        << std::endl;
    }
}
