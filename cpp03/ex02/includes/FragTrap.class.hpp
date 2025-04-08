#ifndef FRAGTRAP_CLASS_HPP
#define FRAGTRAP_CLASS_HPP

#include "ClapTrap.class.hpp"

class FragTrap : public ClapTrap
{
public:
    //canonical form and more
    FragTrap( void ); // constructeur classique (sans arg)
    FragTrap( std::string name ); // constructeur avec arg
    FragTrap( const FragTrap &src ); // constructeur de copie (avec arg == reference d'une instance de classe)
    ~FragTrap( void ); // destructeur classique
    FragTrap& operator=( const FragTrap &src ); // surcharge de l'operateur d'affectation
    //fonction membres
    void highFivesGuys( void );
    void attack(const std::string& target);
};

#endif