#include "Zombie.hpp"

Zombie::Zombie( void )
{
    return ;
}
Zombie::Zombie(const std::string &name) : _name(name)
{}

Zombie::~Zombie( void )
{
    return ;
}

void    Zombie::announce()
{
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
    return ;
}

void	Zombie::setname(std::string name)
{
    this->_name = name;
    return ;
}