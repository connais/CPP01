#include "Zombie.hpp"

int main()
{
    Zombie *horde = zombieHorde(27, "jimmy");
    int i = -1;
    
    while (++i < 27)
        horde->announce();
    delete [] horde;
    return (0);
}