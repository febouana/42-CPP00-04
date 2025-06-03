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
    // After deleting the animal array
    std::cout << "\n######################## Testing Copy and Assignment ########################\n" << std::endl;
    
    // Test Cat copy constructor
    std::cout << "--- Testing Cat Copy Constructor ---" << std::endl;
    Cat* originalCat = new Cat();
    originalCat->setIdeas(0, "Original cat idea");
    Cat* copiedCat = new Cat(*originalCat);  // Copy constructor
    
    // Modify original to test if it's a deep copy
    originalCat->setIdeas(0, "Modified original cat idea");
    
    std::cout << "Original cat idea: " << originalCat->getIdeas(0) << std::endl;
    std::cout << "Copied cat idea: " << copiedCat->getIdeas(0) << std::endl;
    
    // Test Dog assignment operator
    std::cout << "\n--- Testing Dog Assignment Operator ---" << std::endl;
    Dog* dog1 = new Dog();
    Dog* dog2 = new Dog();
    
    dog1->setIdeas(0, "Dog1 original idea");
    *dog2 = *dog1;  // Assignment operator
    
    // Modify dog1 to test if it's a deep copy
    dog1->setIdeas(0, "Dog1 modified idea");
    
    std::cout << "Dog1 idea: " << dog1->getIdeas(0) << std::endl;
    std::cout << "Dog2 idea (after assignment): " << dog2->getIdeas(0) << std::endl;
    
    // Test Dog copy constructor (deep copy)
    std::cout << "\n--- Testing Dog Copy Constructor ---" << std::endl;
    Dog* originalDog = new Dog();
    originalDog->setIdeas(0, "Original dog idea 0");
    originalDog->setIdeas(1, "Original dog idea 1");
    
    std::cout << "Original dog before copy: " << originalDog->getIdeas(0) << std::endl;
    
    Dog* copiedDog = new Dog(*originalDog);  // Copy constructor
    
    std::cout << "After copy, before modification:" << std::endl;
    std::cout << "  Original dog: " << originalDog->getIdeas(0) << std::endl;
    std::cout << "  Copied dog: " << copiedDog->getIdeas(0) << std::endl;
    
    originalDog->setIdeas(0, "Modified original dog idea");
    
    std::cout << "After modifying original:" << std::endl;
    std::cout << "  Original dog: " << originalDog->getIdeas(0) << std::endl;
    std::cout << "  Copied dog: " << copiedDog->getIdeas(0) << " (should still be original idea)" << std::endl;
    
    std::cout << "\n--- Testing Cat Assignment Operator ---" << std::endl;
    Cat* cat1 = new Cat();
    Cat* cat2 = new Cat();
    
    cat1->setIdeas(0, "Cat1 original idea");
    cat1->setIdeas(1, "Cat1 second idea");
    cat2->setIdeas(0, "Cat2 original idea");
    
    std::cout << "Before assignment:" << std::endl;
    std::cout << "  Cat1: " << cat1->getIdeas(0) << std::endl;
    std::cout << "  Cat2: " << cat2->getIdeas(0) << std::endl;

    *cat2 = *cat1;
    
    std::cout << "After assignment:" << std::endl;
    std::cout << "  Cat1: " << cat1->getIdeas(0) << std::endl;
    std::cout << "  Cat2: " << cat2->getIdeas(0) << " (should be same as Cat1)" << std::endl;

    cat1->setIdeas(0, "Cat1 modified idea");
    
    std::cout << "After modifying Cat1:" << std::endl;
    std::cout << "  Cat1: " << cat1->getIdeas(0) << std::endl;
    std::cout << "  Cat2: " << cat2->getIdeas(0) << " (should still have Cat1's original idea)" << std::endl;

    std::cout << "Second idea check:" << std::endl;
    std::cout << "  Cat1 second idea: " << cat1->getIdeas(1) << std::endl;
    std::cout << "  Cat2 second idea: " << cat2->getIdeas(1) << std::endl;

    delete originalCat;
    delete copiedCat;
    delete dog1;
    delete dog2;

    return (0);
}
