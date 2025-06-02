#ifndef CLAPTRAP_CLASS_HPP
#define CLAPTRAP_CLASS_HPP

#include <iostream>
#include <string>

class ClapTrap
{
protected:
    std::string _Name;
    unsigned int _HitPoint;
    unsigned int _EnergyPoint;
    unsigned int _AttackDamage;
public:
    ClapTrap( void );
    ClapTrap( std::string name );
    ClapTrap( const ClapTrap &src );
    ~ClapTrap( void );
    ClapTrap& operator=( const ClapTrap &src );
    
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

    std::string get_Name( void ) const;
    unsigned int get_HitPoint( void ) const;
    unsigned int get_EnergyPoint( void ) const;
    unsigned int get_AttackDamage( void ) const;
};

#endif
