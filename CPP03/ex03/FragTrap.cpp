#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    std::cout << "FragTrap default constructor called" << std::endl;
    this->hitPoints = 100;
    this->energyPoints = 100;
    this->attackDamage = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << "FragTrap name constructor called" << std::endl;
    this->name = name;
    this->hitPoints = 100;
    this->energyPoints = 100;
    this->attackDamage = 30;
}

FragTrap::FragTrap( FragTrap& copy) : ClapTrap(copy)
{
    std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& copy)
{
    std::cout << "FragTrap assignation operator called" << std::endl;
    this->name = copy.name;
    this->hitPoints = copy.hitPoints;
    this->energyPoints = copy.energyPoints;
    this->attackDamage = copy.attackDamage;
    return (*this);
}

void    FragTrap::printName()
{
    std::cout << std::endl;
    std::cout << this->name << std::endl;
    std::cout << this->hitPoints << std::endl;
    std::cout << this->energyPoints << std::endl;
    std::cout << this->attackDamage << std::endl;

}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << this->name << " high fives" << std::endl;
}