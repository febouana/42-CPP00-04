#include "Weapon.hpp"

Weapon::Weapon( std::string type )
{
    setType( type );
}

Weapon::~Weapon( void )
{
    return ;
}

void Weapon::setType( std::string new_type )
{
    _type = new_type;
}

const std::string &Weapon::getType( void ) const
{
    return (_type);
}

// ==========================================================


// ==========================================================

