#include "sedIsForLosers.hpp"

int main(int argc, char **argv)
{
    if (argc == 4)
    {
        std::string filename = argv[1];
        std::string s1 = argv[2];
        std::string s2 = argv[3];

        std::ifstream old_file(filename.c_str()); //only read //erreur si fichier inexistant 
        if (!old_file) 
            return (std::cout << "Error: cannot open " << filename << std::endl, 1);
        std::ofstream new_file((filename + ".replace").c_str()); //only write //peux creer si n'existe pas deja
        if (!new_file) 
            return (std::cout << "Error: cannot create or open " << filename << ".replace" << std::endl, old_file.close(), 1);

        std::string line;
        while (std::getline(old_file, line))
            sedIsForLosers::replace_in_new_file(new_file, line, s1, s2);

        old_file.close();
        new_file.close();
    }
    return (0);
}
