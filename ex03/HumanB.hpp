#pragma once
#include "Weapon.hpp"

class HumanB
{

public:

    
    HumanB(std::string name, Weapon* weapon = NULL);
    ~HumanB(void);
    
    void    attack(void);
    void    setWeapon(Weapon &weapon);

private:

    std::string _name;
    Weapon*  weapon;
};