#include "ScavTrap.hpp"

class FragTrap : public ClapTrap
{
    public:
        FragTrap();
        FragTrap(std::string name);
        FragTrap(FragTrap& copy);
        ~FragTrap();
        FragTrap& operator=(const FragTrap& copy);
        void    printName();
        void highFivesGuys(void);
};