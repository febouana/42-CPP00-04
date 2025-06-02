#include "../includes/ClapTrap.class.hpp"
#include "../includes/ScavTrap.class.hpp"
#include "../includes/FragTrap.class.hpp"
#include "../includes/DiamondTrap.class.hpp"

int main()
{
    // {
    //     std::cout << "##### CLAPTRAP TESTS #####" << std::endl;
    //     ClapTrap contender("Contender");
    //     ClapTrap challenger("Challenger");
    
    //     contender.attack("Challenger");
    //     challenger.takeDamage(0);
    
    //     challenger.attack("Contender");
    //     contender.takeDamage(0);
        
    //     contender.beRepaired(3);
    //     challenger.beRepaired(3);
        
    //     contender.attack("Challenger");
    //     challenger.takeDamage(0);
    //     std::cout << "It's the most annoying fight that I've ever seen..." << std::endl;
    // }
    // {
    //     std::cout << std::endl << "##### SCAVTRAP TESTS #####" << std::endl;
    //     ClapTrap claptrap("CLAP");
    //     ScavTrap scavTrap("SCAV");

    //     while (claptrap.get_HitPoint() > 0 && scavTrap.get_HitPoint() > 0)
    //     {
    //         claptrap.attack(scavTrap.get_Name());
    //         scavTrap.takeDamage(claptrap.get_AttackDamage());
    //         scavTrap.beRepaired(5);
    //         scavTrap.guardGate(); 
    //         scavTrap.attack(claptrap.get_Name());
    //         claptrap.takeDamage(scavTrap.get_AttackDamage());
    //     }
    //     std::cout << scavTrap.get_Name() << " is the winner!" << std::endl;
    // }
    // {
    //     std::cout << std::endl << "##### FRAGTRAP TESTS #####" << std::endl;
    //     ClapTrap claptrap("CLAP");
    //     FragTrap fragTrap("FRAG");

    //     while (claptrap.get_HitPoint() > 0 && fragTrap.get_HitPoint() > 0)
    //     {
    //         claptrap.attack(fragTrap.get_Name());
    //         fragTrap.takeDamage(claptrap.get_AttackDamage());
    //         fragTrap.beRepaired(5);
    //         fragTrap.highFivesGuys();
    //         fragTrap.attack(claptrap.get_Name());
    //         claptrap.takeDamage(fragTrap.get_AttackDamage());
    //     }
    //     std::cout << fragTrap.get_Name() << " is the winner!" << std::endl;
    // }
    {
        std::cout << std::endl << "##### DIAMOND TESTS #####" << std::endl;
        ClapTrap claptrap("CLAP");
        DiamondTrap diamondTrap("BOSS");

        claptrap.attack("BOSS");
        diamondTrap.whoAmI();
        diamondTrap.guardGate();
        diamondTrap.highFivesGuys();
        diamondTrap.attack("CLAP");
    }
    return (0);
}
