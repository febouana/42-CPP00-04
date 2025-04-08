#ifndef HUMANB_CLASS_H
# define HUMANB_CLASS_H

#include "Weapon.class.hpp"

class HumanB
{
private :
    std::string _name;
    Weapon *_weapon;
public :
    HumanB( std::string new_name );
    ~HumanB( void );
    void attack( void ) const;
    void setWeapon( Weapon &new_weapon );
};

#endif