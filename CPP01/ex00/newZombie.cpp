#include "Zombie.hpp"

Zombie  *newZombie(std::string name)
{
    Zombie *zombie1;

    zombie1 = new Zombie;
    zombie1->set_name(name);
    return (zombie1);
}
