#include "../includes/ClapTrap.class.hpp"
#include "../includes/DiamondTrap.class.hpp"

//? Constructors ==================================================================================================================================

DiamondTrap::DiamondTrap() : ClapTrap("DefaultDT_clap_name") 
{
    std::cout << "DefaultDT_clap_name: <FRAGTRAP DEFAULT CONSTRUCTOR CALLED>" << std::endl;
    this->_Name = "DefaultDT_clap_name";
    this->_HitPoint = FragTrap::_HitPoint;
	this->_EnergyPoint = ScavTrap::_EnergyPoint;
	this->_AttackDamage = FragTrap::_AttackDamage;
}

DiamondTrap::DiamondTrap( std::string name ) : ClapTrap(name + "_clap_name")
{
    std::cout << name << ": <DIAMONDTRAP CONSTRUCTOR CALLED>" << std::endl;
    this->_Name = name;
    this->_HitPoint = FragTrap::_HitPoint;
	this->_EnergyPoint = ScavTrap::_EnergyPoint;
	this->_AttackDamage = FragTrap::_AttackDamage;
}

DiamondTrap::DiamondTrap( const DiamondTrap &src ) : ClapTrap(src), ScavTrap(src), FragTrap(src)
{
    std::cout << _Name << ": <DIAMONDTRAP COPY CONSTRUCTOR CALLED>" << std::endl;
    *this = src;
}

//? Destructor ==================================================================================================================================

DiamondTrap::~DiamondTrap( void )
{
    std::cout << _Name << ": <DIAMONDTRAP DESTRUCTOR CALLED>" << std::endl;
}

//? Overloaded Operator ==================================================================================================================================

DiamondTrap& DiamondTrap::operator=( const DiamondTrap &src )
{
    std::cout << _Name << ": <DIAMONDTRAP ASSIGNATION OPERATOR CALLED>" << std::endl;
    if (this != &src)
    {
        this->_Name = src._Name; // '+ clap_name'
        this->_HitPoint = src._HitPoint;
        this->_EnergyPoint = src._EnergyPoint;
        this->_AttackDamage = src._AttackDamage; // <-- FIXED
    }
    return (*this);
}

//? Public methods ==================================================================================================================================

void DiamondTrap::whoAmI( void )
{
    std::cout << "Hi! I am a DiamondTrap named " << this->_Name << " and I am originated from the ClapTrap named " << ClapTrap::_Name << "." <<
	std::endl;
}

// void DiamondTrap::attack(const std::string& target)
// {
//     ScavTrap::attack(target);
// }
