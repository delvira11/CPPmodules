#include "ScavTrap.hpp"

int main()
{

    //ScavTrap player1;
    ClapTrap player2("Max");
    ScavTrap player3("Jooon");
    ScavTrap player4(player3);
    // ScavTrap player4 = player3;

    player2.printName();
    player3.printName();
    player4.printName();
    player3.attack("Max");
    player2.takeDamage(20);

    player2.beRepaired(10);

    player3.guardGate();
    // player2.printName();
    // player3.printName();
    // player4.printName();
}