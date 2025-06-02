#ifndef DIAMONDTRAP_CLASS_HPP
#define DIAMONDTRAP_CLASS_HPP

#include "ClapTrap.class.hpp"
#include "ScavTrap.class.hpp"
#include "FragTrap.class.hpp"

class DiamondTrap : public ScavTrap , public FragTrap
{
private:
	std::string _Name;
public:
    DiamondTrap( void );
    DiamondTrap( std::string name );
    DiamondTrap( const DiamondTrap &src );
    ~DiamondTrap( void );
    DiamondTrap& operator=( const DiamondTrap &src );
    void whoAmI( void );
    // void attack(const std::string& target);
    
    using ScavTrap::attack;
};

#endif