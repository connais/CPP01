#pragma once
#include <iostream>
#include <string>


class   Weapon
{
public:


	Weapon				(std::string weapon);
	~Weapon				(void);
	const std::string&	getType();
	void				setType(std::string newType);

private:

    std::string _type;

};