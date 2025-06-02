#include "../includes/ClapTrap.class.hpp"
#include "../includes/ScavTrap.class.hpp"

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
    {
        std::cout << std::endl << "##### SCAVTRAP TESTS #####" << std::endl;
        ClapTrap claptrap("CLAP");
        ScavTrap scavTrap("FRAG");

        claptrap.attack(scavTrap.get_Name());
        scavTrap.takeDamage(claptrap.get_AttackDamage());

        scavTrap.beRepaired(5);
        scavTrap.guardGate(); 

        scavTrap.attack(claptrap.get_Name());
        claptrap.takeDamage(scavTrap.get_AttackDamage());
        std::cout << scavTrap.get_Name() << " is the winner!" << std::endl;
    }
    return (0);
}
