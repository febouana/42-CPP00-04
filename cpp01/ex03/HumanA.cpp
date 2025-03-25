#include "HumanA.hpp"

HumanA::HumanA( std::string new_name,  Weapon &new_weapon) : _name(new_name), _weapon(new_weapon)
{
}

HumanA::~HumanA( void )
{
    return ;
}

void HumanA::attack( void ) const
{
    std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}
