#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
    {
        Weapon club = Weapon("crude spiked club");
        HumanA bob("Bob", club);
        bob.attack();
        club.setType("some other type of club");
        bob.attack();
    }
    {
        Weapon club = Weapon("crude spiked club");
        HumanB jim("Jim");
        jim.setWeapon(club);
        jim.attack();
        club.setType("some other type of club");
        jim.attack();
    }
    return (0);
}

//* Plus interessant d'utiliser une reference pour HumanA car 1) on ne veut pas que l'arme change 2) on ne veut pas de pointeur null  et 2) on l'initialise des le lancement de la classe HumanA.
//* En effet, dans le cas de HumanB, on ne peut pas initialiser l'arme des le lancement de la classe car on ne connait pas encore l'arme. On utilise donc un pointeur pour pouvoir l'initialiser plus tard.