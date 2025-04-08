#include "../includes/Dog.class.hpp"

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
    std::cout << "DOG: Bark bark!" << std::endl;
}
