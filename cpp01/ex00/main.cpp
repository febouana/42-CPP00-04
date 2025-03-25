#include "Zombie.hpp"

Zombie* newZombie( std::string name );
void randomChump( std::string name );

int main()
{
    Zombie *zombie_heap = newZombie("Zombie_heap");
    delete zombie_heap;

    randomChump("Zombie_stack");
}