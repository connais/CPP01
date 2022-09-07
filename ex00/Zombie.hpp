#pragma once
#include <iostream>
#include <string>

class   Zombie
{
private:

	std::string _name;

public:

    void announce( void );

    Zombie(const std::string &name);
    ~Zombie( void );
};

void randomChump( std::string name );
Zombie* newZombie( std::string name );

