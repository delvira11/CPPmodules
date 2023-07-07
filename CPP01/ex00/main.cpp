#include "Zombie.hpp"

int main()
{
    Zombie  *zombieheap;

    zombieheap = newZombie("Carlos");
    zombieheap->announce();
    randomChump("David");
    delete zombieheap;

}