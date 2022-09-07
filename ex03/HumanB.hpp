#pragma once
#include "Weapon.hpp"

class HumanB
{

public:

    
    HumanB(std::string name);
    ~HumanB(void);
    Weapon  weapon;
    void    attack(void);
    void    setWeapon(Weapon weapon);

private:

    std::string _name;

};