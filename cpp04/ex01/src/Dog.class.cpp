#include "../includes/Dog.class.hpp"

// ########## DOG CANON #####################################################################################

Dog::Dog( void ) : Animal()
{
    setType("Dog");
    std::cout << "<DOG CONSTRUCTOR CALLED>" << std::endl;
    this->brain = new Brain();
}

Dog::Dog( const Dog &src ) : Animal(src)
{
    std::cout << "<DOG COPY CONSTRUCTOR CALLED>" << std::endl;
    // Deep copy - important to create a NEW Brain
    this->brain = new Brain();
    // Copy the brain contents
    if (src.brain)
    {
        for (int i = 0; i < 100; i++)
        {
            this->setIdeas(i, src.getIdeas(i));
        }
    }
}

Dog::~Dog( void )
{
    delete this->brain;
    std::cout << "<DOG DESTRUCTOR CALLED>" << std::endl;
}

Dog& Dog::operator=( const Dog &src )
{
    std::cout << "<DOG ASSIGNATION OPERATOR CALLED>" << std::endl;
    if (this != &src)
    {
        Animal::operator=(src);
        if (this->brain)
        {
            delete this->brain;
            this->brain = NULL;
        }
        this->brain = new Brain();
        if (src.brain)
        {
            for (int i = 0; i < 100; i++)
            {
                this->setIdeas(i, src.getIdeas(i));
            }
        }
    }
    return (*this);
}

void Dog::makeSound( void ) const
{
    std::cout << "DOG: Bark bark!" << std::endl;
}

// ########## BRAIN GETTERS ###################################################################################

std::string Dog::getIdeas( int index ) const
{
    if (index < 0 || index >= 100)
        return ("");
    return (this->brain->getIdeas(index));
}

// ########## BRAIN SETTERS ###################################################################################

void Dog::setIdeas( int index, std::string idea )
{
    if (index < 0 || index >= 100)
        return ;
    this->brain->setIdeas(index, idea);
}
