#include "../includes/Zombie.class.hpp"

int main()
{
    Zombie* horde = zombieHorde(5, "ZOMBIE");
    delete[] horde;
}
