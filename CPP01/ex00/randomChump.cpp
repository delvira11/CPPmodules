#include "Zombie.hpp"

void    randomChump(std::string name)
{
    Zombie zombie;

    zombie.set_name(name);
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
    //zombie.~Zombie();
}