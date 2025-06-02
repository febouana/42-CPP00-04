#include "../includes/ScavTrap.class.hpp"

//? Constructors ==================================================================================================================================

ScavTrap::ScavTrap() : ClapTrap() 
{
    std::cout << "DefaultScavTrap: <SCAVTRAP DEFAULT CONSTRUCTOR CALLED>" << std::endl;
    this->_Name = "DefaultScavTrap";
    this->_HitPoint = 100;
    this->_EnergyPoint = 50;
    this->_AttackDamage = 20;
    this->_GuardGate = false;
}

ScavTrap::ScavTrap( std::string name ) : ClapTrap(name)
{
    std::cout << name << ": <SCAVTRAP CONSTRUCTOR CALLED>" << std::endl;
    this->_Name = name;
    this->_HitPoint = 100;
    this->_EnergyPoint = 50;
    this->_AttackDamage = 20;
    this->_GuardGate = false;
}

ScavTrap::ScavTrap( const ScavTrap &src ) : ClapTrap(src)
{
    std::cout << _Name << ": <SCAVTRAP COPY CONSTRUCTOR CALLED>" << std::endl;
    *this = src;
}

//? Destructor ==================================================================================================================================

ScavTrap::~ScavTrap( void )
{
    std::cout << _Name << ": <SCAVTRAP DESTRUCTOR CALLED>" << std::endl;
}

//? Overloaded Operator ==================================================================================================================================

ScavTrap& ScavTrap::operator=( const ScavTrap &src )
{
    std::cout << _Name << ": <SCAVTRAP ASSIGNATION OPERATOR CALLED>" << std::endl;
    if (this != &src)
    {
        this->_Name = src._Name;
        this->_HitPoint = src._HitPoint;
        this->_EnergyPoint = src._EnergyPoint;
        this->_AttackDamage = src._AttackDamage;
        this->_GuardGate = src._GuardGate;
    }
    return (*this);
}

//? Public methods ==================================================================================================================================

void ScavTrap::attack(const std::string& target)
{
    if ( this->_EnergyPoint <= 0)
    {
        std::cout << this->_Name << " has no energy! He cannot attack!" << std::endl;
        return ;
    }
    this->_EnergyPoint--;
    std::cout << this->_Name << " strikes " << target << ", dealing " << this->_AttackDamage << " damage! Boom!" << std::endl;
}

void ScavTrap::guardGate()
{
    if (_GuardGate == true)
        return ;    
    _GuardGate = true;
    std::cout << this->_Name << " is now in Gate keeper mode!" << std::endl;
}
