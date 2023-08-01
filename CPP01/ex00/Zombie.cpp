#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie()
{
    std::cout << "Zombie constructor called" << std::endl;
}

Zombie::~Zombie()
{
   std::cout << "El sombi " << name << " murio" << std::endl; 
}

void    Zombie::announce(void)
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void    Zombie::set_name(std::string zname)
{
    name = zname;
}

