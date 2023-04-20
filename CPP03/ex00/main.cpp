#include "ClapTrap.hpp"

int main()
{
    ClapTrap player1 ("David");
    ClapTrap player2( "Vex" );


    player1.printName();
    player2.printName();

    player1.attack("Vex");
    player2.takeDamage(6);
    player2.beRepaired(1);
    player1.attack("Vex");
    player2.takeDamage(8);
    player2.beRepaired(1);
    player2.attack("David");
}