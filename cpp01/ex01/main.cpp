#include "Zombie.hpp"

int main()
{
    Zombie* horde = zombieHorde(5, "ZOMBIE");
    delete[] horde;
}