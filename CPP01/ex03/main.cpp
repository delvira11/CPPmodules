
#include "Weapon.hpp"
#include "HumanA.hpp"

int main()
{
Weapon  club = Weapon("crude spiked club");

HumanA bob("bob", club);
bob.attack();
club.setType("some other type of club");
bob.attack();
//system("leaks -q weapons");
}