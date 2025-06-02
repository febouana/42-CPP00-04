#ifndef CLAPTRAP_CLASS_HPP
#define CLAPTRAP_CLASS_HPP

#include <iostream>
#include <string>

class ClapTrap
{
private:
    //attributs
    std::string _Name;
    unsigned int _HitPoint;
    unsigned int _EnergyPoint;
    unsigned int _AttackDamage;
public:
    //canonical form and more
    ClapTrap( void ); // constructeur classique (sans arg)
    ClapTrap( std::string name ); // constructeur avec arg
    ClapTrap( const ClapTrap &src ); // constructeur de copie (avec arg == reference d'une instance de classe)
    ~ClapTrap( void ); // destructeur classique
    ClapTrap& operator=( const ClapTrap &src ); // surcharge d'operateur d'assignation
    //fonction membres
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};

#endif













// class Dallas 
// {
// public:
//     Dallas( void ); //canon
//     Dallas( const Dallas &src ); //canon
//     ~Dallas( void ); //canon
//     Dallas& operator=( const Dallas &src ); //canon
// };