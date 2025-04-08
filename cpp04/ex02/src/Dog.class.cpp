#include "../includes/Dog.class.hpp"

// ########## DOG CANON #####################################################################################

Dog::Dog( void ) : AAnimal()
{
    setType("Dog");
    std::cout << "<DOG CONSTRUCTOR CALLED>" << std::endl;
    this->brain = new Brain();
}

Dog::Dog( const Dog &src ) : AAnimal(src)
{
    *this = src;
    std::cout << "<DOG COPY CONSTRUCTOR CALLED>" << std::endl;
}

Dog::~Dog( void )
{
    delete this->brain;
    std::cout << "<DOG DESTRUCTOR CALLED>" << std::endl;
}

Dog& Dog::operator=( const Dog &src )
{
    if (this != &src)
    {
        setType(src.getType());   
    }
    std::cout << "<DOG ASSIGNATION OPERATOR CALLED>" << std::endl;
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
