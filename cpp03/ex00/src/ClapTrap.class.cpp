#include "../includes/ClapTrap.class.hpp"

//? Constructors ==================================================================================================================================

ClapTrap::ClapTrap( void ) : _Name("DefaultClapTrap"), _HitPoint(10), _EnergyPoint(10), _AttackDamage(0)
{
    std::cout << "DefaultClapTrap: <CLAPTRAP DEFAULT CONSTRUCTOR CALLED>" << std::endl;
}

ClapTrap::ClapTrap( std::string name ) : _Name(name), _HitPoint(10), _EnergyPoint(10), _AttackDamage(0)
{
    std::cout << _Name << ": <CLAPTRAP CONSTRUCTOR CALLED>" << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap &src )
{
    std::cout << _Name << ": <CLAPTRAP COPY CONSTRUCTOR CALLED>" << std::endl;
    *this = src;
}

//? Destructor ==================================================================================================================================

ClapTrap::~ClapTrap( void )
{
    std::cout << _Name << ": <CLAPTRAP DESTRUCTOR CALLED>" << std::endl;
}

//? Overloaded Operator ==================================================================================================================================

ClapTrap& ClapTrap::operator=( const ClapTrap &src )
{
    std::cout << _Name << ": <CLAPTRAP ASSIGNATION OPERATOR CALLED>" << std::endl;
    if (this != &src)
    {
        _Name = src._Name;
        _HitPoint = src._HitPoint;
        _EnergyPoint = src._EnergyPoint;
        _AttackDamage = src._AttackDamage;
    }
    return (*this);
}

//? Public methods ==================================================================================================================================

void ClapTrap::attack(const std::string& target)
{
    if (_EnergyPoint <= 0)
    {
        std::cout << _Name << " has no energy! He cannot attack!" << std::endl;
        return ;
    }
    _EnergyPoint--;
    std::cout << _Name << " attacks " << target << ", causing " << _AttackDamage << " points of damage! Can do better, no?" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (amount > _HitPoint)
        _HitPoint = 0;
    else 
        _HitPoint -= amount;
    std::cout << _Name << " takes " << amount << " points of damage!" << std::endl;

}

// augmente ces HPMAX du coup.
void ClapTrap::beRepaired(unsigned int amount)
{
    if (_EnergyPoint <= 0)
    {
        std::cout << _Name << " has no energy! He cannot repair himself" << std::endl;
        return ;
    }
    _EnergyPoint--;
    _HitPoint += amount;
    std::cout << _Name << " repaired himself " << amount << " points!" << std::endl;
}
