#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
    //canonical form and more
    FragTrap( void ); // constructeur classique (sans arg)
    FragTrap( std::string name ); // constructeur avec arg
    FragTrap( const FragTrap &src ); // constructeur de copie (avec arg == reference d'une instance de classe)
    ~FragTrap( void ); // destructeur classique
    FragTrap& operator=( const FragTrap &src ); // surcharge de l'operateur d'affectation
    //methodes
    void highFivesGuys( void );
    void attack(const std::string& target);
};

#endif