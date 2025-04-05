#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

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
    //methodes
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    //to set ClapTrap privates attributes from and for ScavTrap class 
    void set_Name( std::string name );
    void set_HitPoint( unsigned int amount );
    void set_EnergyPoint( unsigned int amount );
    void set_AttackDamage( unsigned int amount );
    //to get ClapTrap privates attributes from and for ScavTrap class
    std::string get_Name( void ) const;
    unsigned int get_HitPoint( void ) const;
    unsigned int get_EnergyPoint( void ) const;
    unsigned int get_AttackDamage( void ) const;
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