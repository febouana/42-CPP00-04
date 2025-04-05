#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    {
        std::cout << "##### CLAPTRAP TESTS #####" << std::endl;
        ClapTrap contender("Contender");
        ClapTrap challenger("Challenger");
    
        contender.attack("Challenger");
        challenger.takeDamage(0);
    
        challenger.attack("Contender");
        contender.takeDamage(0);
        
        contender.beRepaired(3);
        challenger.beRepaired(3);
        
        contender.attack("Challenger");
        challenger.takeDamage(0);
    }
    {
        std::cout << std::endl << "##### SCAVTRAP TESTS #####" << std::endl;
        ClapTrap claptrap("ClapClap");
        ScavTrap scavTrap("ScavScav");

        while (claptrap.get_HitPoint() > 0 && scavTrap.get_HitPoint() > 0)
        {
            claptrap.attack(scavTrap.get_Name());
            scavTrap.takeDamage(claptrap.get_AttackDamage());
            scavTrap.beRepaired(5);
    
            scavTrap.guardGate(); 

            scavTrap.attack(claptrap.get_Name());
            claptrap.takeDamage(scavTrap.get_AttackDamage());
            // claptrap.beRepaired(5);
        }
    }
    {
        std::cout << std::endl << "##### FRAGTRAP TESTS #####" << std::endl;
        ClapTrap claptrap("ClapClap");
        FragTrap fragTrap("FragFrag");

        while (claptrap.get_HitPoint() > 0 && fragTrap.get_HitPoint() > 0)
        {
            claptrap.attack(fragTrap.get_Name());
            fragTrap.takeDamage(claptrap.get_AttackDamage());
            // fragTrap.beRepaired(5);
            
            fragTrap.highFivesGuys();

            fragTrap.attack(claptrap.get_Name());
            claptrap.takeDamage(fragTrap.get_AttackDamage());
            // claptrap.beRepaired(5);
        }
    }
    return (0);
}
