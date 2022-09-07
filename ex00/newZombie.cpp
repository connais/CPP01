#include "Zombie.hpp"

Zombie* newZombie( std::string name ) 
{
    Zombie *nZomb = new Zombie(name);
    return (nZomb);
}