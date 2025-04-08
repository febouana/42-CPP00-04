#include "../includes/Animal.class.hpp"
#include "../includes/Dog.class.hpp"
#include "../includes/Cat.class.hpp"

#include "../includes/WrongAnimal.class.hpp"
#include "../includes/WrongCat.class.hpp"

#include "../includes/Brain.class.hpp"

int main()
{
    std::cout << "######################## ex01/ ########################" << std::endl << std::endl;
    Animal* animals[4]; // impossible si const

    int i = 0;
    while (i < 4)
    {
        if (i % 2 == 0)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
        if (!animals[i])
        {
            std::cout << "Error: Allocation failed\n" << std::endl;
            while (i >= 0)
            {
                if (animals[i])
                {
                    delete animals[i];
                    animals[i--] = NULL;
                }
            }
            return (1);
        }
        i++;    
    }
    std::cout << std::endl;
    i = 0;
    while (i < 4)
    {
        animals[i]->setIdeas(0, "I want to play!");
        std::cout << animals[i]->getType() << i + 1 <<": " << animals[i]->getIdeas(0) << std::endl;
        animals[i]->setIdeas(1, "I want to sleep!");
        std::cout << animals[i]->getType() << i + 1<< ": " << animals[i]->getIdeas(1) << std::endl;
        animals[i]->setIdeas(2, "I want to eat!");
        std::cout << animals[i]->getType() << i + 1 << ": " << animals[i]->getIdeas(2) << std::endl;
        i++;
    }
    std::cout << std::endl;
    i = 0;
    while (i < 4)
    {
        delete animals[i];
        animals[i++] = NULL;
    }
    return (0);
}
