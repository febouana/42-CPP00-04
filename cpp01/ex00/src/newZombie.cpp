#include "../includes/Zombie.class.hpp"

Zombie* newZombie( std::string name )
{
    Zombie *zombie_heap = new Zombie();
    zombie_heap->name_zombie(name);
    zombie_heap->announce();
    return (zombie_heap);
}