#include "../includes/Animal.class.hpp"
#include "../includes/Dog.class.hpp"
#include "../includes/Cat.class.hpp"

#include "../includes/WrongAnimal.class.hpp"
#include "../includes/WrongCat.class.hpp"

int main()
{
    std::cout << "######################## ex00/ ########################" << std::endl << std::endl;
    std::cout << "############ Animal Tests ############" << std::endl << std::endl;
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    if (!meta || !j || !i)
    {
        std::cout << "Error: Allocation failed" << std::endl;
        if (meta)
            delete meta;
        if (j)
            delete j;
        if (i)
            delete i;
        return (1);
    }
    
    std::cout << std::endl;
    meta->makeSound();
    j->makeSound();
    i->makeSound();
    std::cout << std::endl;

    delete meta;
    delete j;
    delete i;

    std::cout << std::endl << "############ WrongAnimal Tests ############" << std::endl << std::endl;
    const WrongAnimal* wa = new WrongAnimal();
    const WrongAnimal* wc = new WrongCat();
    if (!wa || !wc)
    {
        std::cout << "Error: Allocation failed" << std::endl;
        if (wa)
            delete wa;
        if (wc)
            delete wc;
        return (1);
    }
    
    std::cout << std::endl;
    std::cout << "WrongAnimal* wa = new WrongAnimal():" << std::endl;
    wa->makeSound();
    std::cout << "WrongAnimal* wc = new WrongCat():" << std::endl;
    wc->makeSound();
    std::cout << std::endl;

    delete wa;
    delete wc;

    return (0);
}
