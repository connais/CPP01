#pragma once
#include <iostream>
#include <string>

class   Zombie
{
private:

	std::string _name;

public:

    void	announce( void );
    void	setname(std::string name);
    Zombie(void);
    Zombie(const std::string &name);
    ~Zombie( void );
};

Zombie*	zombieHorde( int N, std::string name );

