#include <iostream>
#include <string>

int main()
{
    std::string string = "HI THIS IS BRAIN";
    std::string *stringPTR = &string;
    std::string &stringREF = string;
    
	std::cout << "adresse de la string en mémoire : " << &string << std::endl;
	std::cout << "adresse stockée dans stringPTR : " << stringPTR << std::endl;
	std::cout << "adresse stockée dans stringREF : " << &stringREF << std::endl;

	std::cout << "La valeur de la string : " << string << std::endl;
	std::cout << "La valeur pointée par stringPTR : " << *stringPTR << std::endl; 
	std::cout << "La valeur pointée par stringREF : " << stringREF << std::endl;
	return (0);
}