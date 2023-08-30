#include "ScavTrap.hpp"

int main(int nargs, char **args)
{
    if (nargs != 1)
    {
        std::cout << "This program doesn't need arguments" << std::endl;
        return (0);
    }
    (void)args;

    std::cout << "Create player 1 Scavtrap: " << std::endl;;
    ScavTrap player1;
    std::cout << "-------------------------" << std::endl;
    std::cout << "Create player 2 ClapTrap: " << std::endl;;
    ClapTrap player2("Max");
    player2.printName();
    std::cout << "-------------------------" << std::endl;
    std::cout << "Create player 3 ScavTrap name constructor: " << std::endl;;
    ScavTrap player3("Jooon");
    player3.printName();
    std::cout << "-------------------------" << std::endl;
    std::cout << "Create player 3 ScavTrap copy constructor: " << std::endl;;
    ScavTrap player4(player3);
    player4.printName();
    std::cout << "-------------------------" << std::endl;
    std::cout << "Create player 3 ScavTrap assignment operator: " << std::endl;;
    ScavTrap player5 = player3;
    player5.printName();
    std::cout << "-----------------------------" << std::endl;

    player3.attack("Max");
    player2.takeDamage(20);

    player2.beRepaired(10);

    player3.guardGate();

}