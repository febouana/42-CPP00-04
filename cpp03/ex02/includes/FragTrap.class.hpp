#ifndef FRAGTRAP_CLASS_HPP
#define FRAGTRAP_CLASS_HPP

#include "ClapTrap.class.hpp"

class FragTrap : public ClapTrap
{
public:
    FragTrap( void );
    FragTrap( std::string name );
    FragTrap( const FragTrap &src );
    ~FragTrap( void );
    FragTrap& operator=( const FragTrap &src );
    void attack(const std::string& target);
    void highFivesGuys( void );
};

#endif