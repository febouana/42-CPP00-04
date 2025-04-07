#include "Polymorphism.hpp"

// ########## ANIMAL CANON ##########

Animal::Animal( void )
{
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
    std::cout << "Animal sound!" << std::endl;
}

// ########## CAT CANON #####################################################################################

Cat::Cat( void ) : Animal()
{
    setType("Cat");
    std::cout << "<CAT CONSTRUCTOR CALLED>" << std::endl;
}

Cat::Cat( const Cat &copy ) : Animal( copy )
{
    *this = copy;
    std::cout << "<CAT COPY CONSTRUCTOR CALLED>" << std::endl;
}

Cat::~Cat( void )
{
    std::cout << "<CAT DESTRUCTOR CALLED>" << std::endl;
}

Cat& Cat::operator=( const Cat &src )
{
    if (this != &src)
    {
        setType(src.getType());    
    }
    std::cout << "<ANIMAL ASSIGNATION OPERATOR CALLED>" << std::endl;
    return (*this);
}

void Cat::makeSound( void ) const
{
    std::cout << "Meow!" << std::endl;
}

// ########## DOG CANON #####################################################################################

Dog::Dog( void ) : Animal()
{
    setType("Dog");
    std::cout << "<DOG CONSTRUCTOR CALLED>" << std::endl;
}

Dog::Dog( const Dog &src ) : Animal(src)
{
    *this = src;
    std::cout << "<DOG COPY CONSTRUCTOR CALLED>" << std::endl;
}

Dog::~Dog( void )
{
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
    std::cout << "Bark bark!" << std::endl;
}