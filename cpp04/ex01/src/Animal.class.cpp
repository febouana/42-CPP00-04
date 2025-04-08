#include "../includes/Animal.class.hpp"

// ########## ANIMAL CANON ##########

Animal::Animal( void )
{
    this->_type = "Animal";
    std::cout << "<ANIMAL CONSTRUCTOR CALLED>" << std::endl;
}

Animal::Animal( const Animal &copy )
{
    *this = copy;
    std::cout << "<ANIMAL COPY CONSTRUCTOR CALLED>" << std::endl;
}

Animal::~Animal( void )
{
    std::cout << "<ANIMAL DESTRUCTOR CALLED>" << std::endl;
}

Animal& Animal::operator=( const Animal &copy )
{
    if (this != &copy)
    {
        // Copy the attributes from src to this object
    }
    std::cout << "<ANIMAL ASSIGNATION OPERATOR CALLED>" << std::endl;
    return (*this);
}

// ########## ANIMAL METHODES ##########

std::string Animal::getType( void ) const
{
    return (this->_type);
}

void Animal::setType( std::string _type )
{
    this->_type = _type;
}

void Animal::makeSound( void ) const
{ 
    std::cout << "ANIMAL: Animal sound!" << std::endl;
}

// ########## CAT DOG BRAIN GETTERS + SETTERS ##########

void Animal::setIdeas( int index, std::string idea )
{
    (void)index;
    (void)idea;
    std::cout << "Animal has no ideas to set." << std::endl;
}

std::string Animal::getIdeas( int index ) const
{
    (void)index;
    return "Animal has no ideas.";
}
