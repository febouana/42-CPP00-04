#ifndef HUMANA_H
# define HUMANA_H
# include "Weapon.hpp"

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