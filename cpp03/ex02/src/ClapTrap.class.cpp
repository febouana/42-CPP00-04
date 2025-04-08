#include "../includes/ClapTrap.class.hpp"

//canonical form and more ==================================================================================================================================

ClapTrap::ClapTrap( void ) : _Name("DefaultClapTrap"), _HitPoint(10), _EnergyPoint(10), _AttackDamage(0)
{
    std::cout << "NoName enter the arena!" << std::endl;
}

ClapTrap::ClapTrap( std::string name ) : _Name(name), _HitPoint(10), _EnergyPoint(10), _AttackDamage(0)
{
    std::cout << "<CLAPTRAP CONSTRUCTOR CALLED>" << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap &src )
{
    *this = src;
}

ClapTrap::~ClapTrap( void )
{
    std::cout << "<CLAPTRAP DESTRUCTOR CALLED>" << std::endl;
}

ClapTrap& ClapTrap::operator=( const ClapTrap &src )
{
    if (this != &src)
    {
        _Name = src._Name;
        _HitPoint = src._HitPoint;
        _EnergyPoint = src._EnergyPoint;
        _AttackDamage = src._AttackDamage;
    }
    return (*this);
}

//methodes ==================================================================================================================================

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

void ClapTrap::beRepaired(unsigned int amount)
{
    if (_EnergyPoint <= 0)
    {
        std::cout << _Name << " has no energy! He cannot repair himself" << std::endl;
        return ;
    }
    _EnergyPoint--;
    _HitPoint += amount;
    std::cout << _Name << " repaired himself " << amount << " points of damage!" << std::endl;
}

//to set ClapTrap privates attributes from and for ScavTrap class ==================================================================================================================================

void ClapTrap::set_Name(std::string name)
{
    this->_Name = name;
}
void ClapTrap::set_HitPoint(unsigned int hit_points)
{
    this->_HitPoint = hit_points;
}
void ClapTrap::set_EnergyPoint(unsigned int energy_points)
{
    this->_EnergyPoint = energy_points;
}
void ClapTrap::set_AttackDamage(unsigned int attack_damage)
{
    this->_AttackDamage = attack_damage;
}

//to get ClapTrap privates attributes from and for ScavTrap class ==================================================================================================================================

std::string ClapTrap::get_Name(void) const
{
    return (this->_Name);
}

unsigned int ClapTrap::get_HitPoint(void) const
{
    return (this->_HitPoint);
}

unsigned int ClapTrap::get_EnergyPoint(void) const
{
    return (this->_EnergyPoint);
}

unsigned int ClapTrap::get_AttackDamage(void) const
{
    return (this->_AttackDamage);
}
