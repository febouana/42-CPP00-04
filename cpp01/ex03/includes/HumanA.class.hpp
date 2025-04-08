#ifndef HUMANA_CLASS_H
# define HUMANA_CLASS_H

# include "Weapon.class.hpp"

class HumanA
{
private :
    std::string _name;
    Weapon &_weapon;
public :
    HumanA( std::string new_name, Weapon &new_weapon );
    ~HumanA( void );
    void attack( void ) const;
};

#endif