#include "../includes/sedIsForLosers.hpp"


sedIsForLosers::sedIsForLosers()
{
}

sedIsForLosers::~sedIsForLosers()
{
}

void sedIsForLosers::replace_in_new_file(std::ofstream &new_file, std::string line, std::string s1, std::string s2)
{
    std::string result = line; //std::string gere deja la memoire dynamiquement
    size_t pos = 0;

    while ((pos = result.find(s1, pos)) != std::string::npos) 
    {
        result.erase(pos, s1.length());  //supprime l'ancien mot
        result.insert(pos, s2);          //insere le nouveau mot
        pos += s1.length();              //avance pour eviter une boucle infinie
    }
    new_file << result << std::endl;
}