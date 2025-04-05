#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private :
    //attributs
    bool _GuardGate;
public:
    //canonical form and more
    ScavTrap( void ); // constructeur classique (sans arg)
    ScavTrap( std::string name ); // constructeur avec arg
    ScavTrap( const ScavTrap &src ); // constructeur de copie (avec arg == reference d'une instance de classe)
    ~ScavTrap( void ); // destructeur classique
    ScavTrap& operator=( const ScavTrap &src ); // surcharge de l'operateur d'affectation
    //methodes
    void attack(const std::string& target);
    void guardGate();
};

#endif