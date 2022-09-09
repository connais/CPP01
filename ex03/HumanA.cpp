#include "HumanA.hpp"
    
HumanA::HumanA(std::string name, Weapon&  weapon) : weapon(weapon), _name(name) 
{
	return ;
}
HumanA::~HumanA(void)
{
    return ;
}
    
void    HumanA::attack(void)
{
	std::string type = this->weapon.getType();
	std::cout << this->_name << " attacks with their " << type << std::endl;
	return ;
}
    