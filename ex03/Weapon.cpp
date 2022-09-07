#include "Weapon.hpp"

Weapon::Weapon(std::string weapon) : _type(weapon)
{
    return ;
}

Weapon::~Weapon(void)
{
	return ;
}

const std::string&  Weapon::getType()
{
    return (this->_type);
}
void    Weapon::setType(std::string newType)
{
    this->_type = newType;
    return ;
}