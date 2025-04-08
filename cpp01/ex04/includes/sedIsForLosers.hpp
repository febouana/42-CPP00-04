#ifndef SEDISFORLOSERS_HPP
#define SEDISFORLOSERS_HPP

#include <iostream>
#include <fstream> //std::ifstream
#include <string>

class sedIsForLosers
{
public : 
    sedIsForLosers( void );
    ~sedIsForLosers( void );
    static void replace_in_new_file( std::ofstream &new_file, std::string line, std::string s1, std::string s2 );
};

#endif