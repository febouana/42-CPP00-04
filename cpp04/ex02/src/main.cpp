#include "../includes/AAnimal.class.hpp"
#include "../includes/Dog.class.hpp"
#include "../includes/Cat.class.hpp"
#include "../includes/WrongAnimal.class.hpp"
#include "../includes/WrongCat.class.hpp"
#include "../includes/Brain.class.hpp"

int main()
{
    std::cout << "######################## ex02/ ########################" << std::endl << std::endl;
    std::cout << "############ Tests with AAnimal Abstract Class ############" << std::endl << std::endl;
    AAnimal* AAnimals[4]; // impossible si const

    int i = 0;
    while (i < 4)
    {
        if (i % 2 == 0)
            AAnimals[i] = new Dog();
        else
            AAnimals[i] = new Cat();
        if (!AAnimals[i])
        {
            std::cout << "Error: Allocation failed\n" << std::endl;
            while (i >= 0)
            {
                if (AAnimals[i])
                {
                    delete AAnimals[i];
                    AAnimals[i--] = NULL;
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
        AAnimals[i]->setIdeas(0, "I want to play!");
        std::cout << AAnimals[i]->getType() << i + 1 <<": " << AAnimals[i]->getIdeas(0) << std::endl;
        AAnimals[i]->setIdeas(1, "I want to sleep!");
        std::cout << AAnimals[i]->getType() << i + 1 << ": " << AAnimals[i]->getIdeas(1) << std::endl;
        AAnimals[i]->setIdeas(2, "I want to eat!");
        std::cout << AAnimals[i]->getType() << i + 1 << ": " << AAnimals[i]->getIdeas(2) << std::endl;
        i++;
    }
    std::cout << std::endl;
    i = 0;
    while (i < 4)
    {
        delete AAnimals[i];
        AAnimals[i++] = NULL;
    }

    // Simple test with abstract class to show the good error message 
	// const AAnimal *animal = new AAnimal();
	// animal->makeSound();

    return (0);
}
