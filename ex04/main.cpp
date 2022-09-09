#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
int main(int argc, char **argv)
{
    std::string    res;
    int            i = 0;
    int            index = 0;
    std::istreambuf_iterator<char> eos;
    if (argc != 4)
    {
        std::cout << "bad parameter" << std::endl;
        exit(1);
    }
    std::string    dst(argv[1]);
    std::string    dst1(argv[2]);
    std::string    dst2(argv[3]);
    std::ifstream   ifs(dst.c_str());
    if(!ifs) // file couldn't be opened
    {
      std::cerr << "Error: file could not be opened" << std::endl;
      ifs.close();
      return (0);
    }
    if (dst == "" || dst1 == "" || dst2 == "" || dst1 == dst2) 
    {
		std::cout << "Bad entries" << std::endl;
		return (0);
    }
    std::string replace(std::istreambuf_iterator<char>(ifs), eos);
    ifs.close();
    int lenght = replace.length();
    dst += ".replace";
    std::ofstream   ofs(dst.c_str());
    while (i < lenght)
    {
        index = replace.find(dst1, index);
        std::cout << "occurrence de dst1 : " << index << std::endl;
        if(replace.find(dst1, index) != std::string::npos && i == index) 
        {
    
            res += dst2; 
            index += dst1.length();
            i += dst1.length();
        }
        res += replace[i];
        i++;
    }
    ofs << res;
    std::cout << "End-of-file reached.." << std::endl;
    ofs.close();
}