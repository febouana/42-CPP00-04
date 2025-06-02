#include "../includes/ClapTrap.class.hpp"

int main()
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
    std::cout << "It's the most annoying fight that I've ever seen..." << std::endl;
    
    return (0);
}