#include <iostream>


class ClapTrap
{
    private:
        std::string name;
        int         hitPoints;
        int         energyPoints;
        int         attackDamage;

    public:
        ClapTrap();
        ClapTrap( std::string name );
        ~ClapTrap();
        ClapTrap( ClapTrap& copy);
        ClapTrap&  operator=(ClapTrap &copy);

        void    printName();

        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};