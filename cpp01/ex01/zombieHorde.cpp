#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    if (N <= 0)
        return (NULL);
    Zombie *horde = new Zombie[N];
    for (int i = 0; i < N; i++)
    {
        std::cout << "Zombie " << i << " created" << std::endl;
        horde[i].name_zombie(name);
        horde[i].announce();
    }
    return (horde);
}
