#include "Zombie.hpp"

Zombie::Zombie(const std::string &name) : _name(name)
{};

Zombie::~Zombie( void )
{
    return ;
}

void    Zombie::announce()
{
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
    return ;
}