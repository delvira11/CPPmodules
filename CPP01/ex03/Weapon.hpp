#include <iostream>

#ifndef WEAPON_HPP
# define WEAPON_HPP

class   Weapon
{
    private:
        std::string type;
    public:
        Weapon(std::string type);
        const std::string     &getType();
        void            setType(std::string settype);
};


const std::string     &getType();
void            setType(std::string settype);

#endif