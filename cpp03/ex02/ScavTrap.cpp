#include "ScavTrap.hpp"

//canonical form and more ==================================================================================================================================

ScavTrap::ScavTrap() : ClapTrap()
{
    set_Name("DefaultScavTrap");
    set_HitPoint(100);
    set_EnergyPoint(50);
    set_AttackDamage(20);
    this->_GuardGate = false;
    std::cout << "The ScavTrap "<< get_Name() <<" is born! 🐣" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) 
{
    set_Name(name);
    set_HitPoint(100);
    set_EnergyPoint(50);
    set_AttackDamage(20);
    this->_GuardGate = false;
    std::cout << "ScavTrap enters the arena! 🐣" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &src) : ClapTrap(src) 
{
    *this = src;
    std::cout << "ScavTrap " << get_Name() << " is copied! 🐣" << std::endl;
}

ScavTrap::~ScavTrap(void) 
{
    std::cout << "The ScavTrap " << get_Name() << " is dead! 🕊️ " << std::endl;
}

ScavTrap& ScavTrap::operator=( const ScavTrap &src )
{
    if (this != &src)
    {
        set_Name(src.get_Name());
        set_HitPoint(src.get_HitPoint());
        set_EnergyPoint(src.get_EnergyPoint());
        set_AttackDamage(src.get_AttackDamage());
        this->_GuardGate = src._GuardGate;
    }
    std::cout << "The ScavTrap " << get_Name() << " is assigned! 🐣" << std::endl;
    return (*this);
}

//methodes ==================================================================================================================================

void ScavTrap::attack(const std::string& target)
{
    if (get_EnergyPoint() <= 0)
    {
        std::cout << get_Name() << " has no energy! He cannot attack!" << std::endl;
        return ;
    }
    set_EnergyPoint(get_EnergyPoint() - 1);
    std::cout << get_Name() << " attacks " << target << ", causing " << get_AttackDamage() << " points of damage! Nice Job!" << std::endl;
}

void ScavTrap::guardGate()
{
    if (_GuardGate == true)
        return ;    
    _GuardGate = true;
    std::cout << get_Name() << " is now in Gate keeper mode! ✨" << std::endl;
} 
