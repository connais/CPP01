#include "Zombie.hpp"

int main()
{
    Zombie *z = newZombie("MMA");
    randomChump("GREG");

    delete z;
    return (0);
}