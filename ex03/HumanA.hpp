#pragma once
#include "Weapon.hpp"

class HumanA
{
public:

    
    void    attack(void);
    HumanA(std::string name, Weapon&  weapon);
    ~HumanA(void);

private:
    
    Weapon&  weapon;
    std::string _name;
   
};