#include "FragTrap.hpp"

//canonical form and more ==================================================================================================================================

FragTrap::FragTrap() : ClapTrap()
{
    set_Name("DefaultFragTrap");
    set_HitPoint(100);
    set_EnergyPoint(100);
    set_AttackDamage(30);
    std::cout << "The FragTrap "<< get_Name() <<" is born! 🐣" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) 
{
    set_Name(name);
    set_HitPoint(100);
    set_EnergyPoint(100);
    set_AttackDamage(30);
    std::cout << "a FragTrap is born! 🐣" << std::endl;
}

FragTrap::FragTrap(const FragTrap &src) : ClapTrap(src) 
{
    *this = src;
    std::cout << "FragTrap " << get_Name() << " is copied! 🐣" << std::endl;
}

FragTrap::~FragTrap(void) 
{
    std::cout << "The FragTrap " << get_Name() << " is dead! 🕊️ " << std::endl;
}

FragTrap& FragTrap::operator=( const FragTrap &src )
{

    if (this != &src)
    {
        set_Name(src.get_Name());
        set_HitPoint(src.get_HitPoint());
        set_EnergyPoint(src.get_EnergyPoint());
        set_AttackDamage(src.get_AttackDamage());
    }
    std::cout << "The FragTrap " << get_Name() << " is assigned! 🐣" << std::endl;
    return (*this);
}

//methodes ==================================================================================================================================

void FragTrap::attack(const std::string& target)
{
    if (get_EnergyPoint() <= 0)
    {
        std::cout << get_Name() << " has no energy! He cannot attack!" << std::endl;
        return ;
    }
    set_EnergyPoint(get_EnergyPoint() - 1);
    std::cout << "FlagTrap " << get_Name() << " attacks " << target << ", causing " << get_AttackDamage() << " points of damage! What a hit!" << std::endl;
}

void FragTrap::highFivesGuys( void )
{
    std::cout << "FragTrap " << get_Name() << " is asking for a high five! 👋 *NOBODY CARES*" << std::endl;
}