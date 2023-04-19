#include <iostream>
#include "Weapon.hpp"


class HumanA
{
    private:
        Weapon      &weapon;
        std::string name;

    public:
        HumanA(std::string name, Weapon &human_weapon);
        void    attack();
};