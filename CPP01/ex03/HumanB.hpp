
#include <iostream>
#include "Weapon.hpp"


class HumanB
{
    private:
        Weapon      *weapon;
        std::string name;

    public:
        HumanB(std::string name);
        ~HumanB();
        void    setWeapon(Weapon &setweapon);
        void    attack();
};