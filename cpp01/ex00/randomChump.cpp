#include "Zombie.hpp"

// stack donc tout se passe dans ce scop
void randomChump( std::string name )
{
    Zombie chump;
    chump.name_zombie(name);
    chump.announce();
}
