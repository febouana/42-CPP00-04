#include "HumanB.hpp"

HumanB::HumanB( std::string new_name )
{
    _name = new_name;
}

HumanB::~HumanB( void )
{
    return ;
}

void HumanB::attack( void ) const 
{
    std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
}

void HumanB::setWeapon( Weapon &new_weapon )
{
    _weapon = &new_weapon;
}