#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string name) : _name(name)
{
	return ;
}

HumanB::~HumanB(void)
{
	return ;
}

void    HumanB::attack(void)
{
	std::string type = this->weapon.getType();
	std::cout << this->_name << " attacks with their " << type << std::endl;
	return ;
}

void    HumanB::setWeapon(Weapon weapon)
{
	return ;
}

