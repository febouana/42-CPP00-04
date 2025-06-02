#ifndef SCAVTRAP_CLASS_HPP
#define SCAVTRAP_CLASS_HPP

#include "ClapTrap.class.hpp"

class ScavTrap : virtual public ClapTrap
{
private :
    bool _GuardGate;
public:
    ScavTrap( void );
    ScavTrap( std::string name );
    ScavTrap( const ScavTrap &src );
    ~ScavTrap( void );
    ScavTrap& operator=( const ScavTrap &src );

    void attack(const std::string& target);
    void guardGate();
};

#endif