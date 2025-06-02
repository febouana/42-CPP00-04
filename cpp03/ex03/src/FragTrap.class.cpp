#include "../includes/FragTrap.class.hpp"

//? Constructors ==================================================================================================================================

FragTrap::FragTrap() : ClapTrap() 
{
    // this->_Name = "DefaultFragTrap";
    this->_HitPoint = 100;
    this->_EnergyPoint = 100;
    this->_AttackDamage = 30;
    std::cout << this->_Name << ": <FRAGTRAP DEFAULT CONSTRUCTOR CALLED>" << std::endl;
}

FragTrap::FragTrap( std::string name ) : ClapTrap(name)
{
    this->_Name = name;
    this->_HitPoint = 100;
    this->_EnergyPoint = 100;
    this->_AttackDamage = 30;
    std::cout << this->_Name << ": <FRAGTRAP CONSTRUCTOR CALLED>" << std::endl;
}

FragTrap::FragTrap( const FragTrap &src ) : ClapTrap(src)
{
    std::cout << _Name << ": <FRAGTRAP COPY CONSTRUCTOR CALLED>" << std::endl;
    *this = src;
}

//? Destructor ==================================================================================================================================

FragTrap::~FragTrap( void )
{
    std::cout << _Name << ": <FRAGTRAP DESTRUCTOR CALLED>" << std::endl;
}

//? Overloaded Operator ==================================================================================================================================

FragTrap& FragTrap::operator=( const FragTrap &src )
{
    std::cout << _Name << ": <FRAGTRAP ASSIGNATION OPERATOR CALLED>" << std::endl;
    if (this != &src)
    {
        this->_Name = src._Name;
        this->_HitPoint = src._HitPoint;
        this->_EnergyPoint = src._EnergyPoint;
        this->_AttackDamage = src._AttackDamage;
    }
    return (*this);
}

//? Public methods ==================================================================================================================================

void FragTrap::attack(const std::string& target)
{
    if ( this->_EnergyPoint <= 0)
    {
        std::cout << this->_Name << " has no energy! He cannot attack!" << std::endl;
        return ;
    }
    this->_EnergyPoint--;
    std::cout << this->_Name << " assaults " << target << " for " << this->_AttackDamage << " damage. That's brutal!" << std::endl;
}

void FragTrap::highFivesGuys( void )
{
    std::cout << this->_Name << " is asking for a high five! *NOBODY CARES*" << std::endl;
}
