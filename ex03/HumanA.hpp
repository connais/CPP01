#pragma once
#include "Weapon.hpp"

class HumanA
{
public:

    Weapon  weapon;
    void    attack(void);
    HumanA(std::string name, Weapon&  weapon);
    ~HumanA(void);

private:

    std::string _name;

};