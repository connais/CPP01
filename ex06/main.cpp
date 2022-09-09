#include "Harl.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
        return (0);
    }
    std::string input = argv[1];
    if (input != "DEBUG" && input != "INFO" && input != "WARNING" && input != "ERROR")
        return (0);
    Harl    instance;
    instance.complain(input);
}