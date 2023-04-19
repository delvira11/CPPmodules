#include "Zombie.hpp"

int main()
{
    Zombie  *zombieheap;

    zombieheap = newZombie("Carlos");
    zombieheap->announce();
    randomChump("David");
    zombieheap->~Zombie();
    //system("leaks -q BraiiiiiiinnnzzzZ");
}