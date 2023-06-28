#include "ClapTrap.hpp"


class ScavTrap : public ClapTrap
{
    public:
        ScavTrap();
        ScavTrap(std::string name);
        ScavTrap(ScavTrap &copy);
        ~ScavTrap();

        void    printName();

        ScavTrap & operator=(ScavTrap const & copy);
        void attack(const std::string& target);
        void guardGate();
};