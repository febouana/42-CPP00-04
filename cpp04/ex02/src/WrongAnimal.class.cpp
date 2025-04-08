#include "../includes/WrongAnimal.class.hpp"

// ########## WrongAnimal CANON ##########

WrongAnimal::WrongAnimal( void )
{
    this->_type = "WrongAnimal";
    std::cout << "<WrongAnimal CONSTRUCTOR CALLED>" << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal &copy )
{
    *this = copy;
    std::cout << "<WrongAnimal COPY CONSTRUCTOR CALLED>" << std::endl;
}

WrongAnimal::~WrongAnimal( void )
{
    std::cout << "<WrongAnimal DESTRUCTOR CALLED>" << std::endl;
}

WrongAnimal& WrongAnimal::operator=( const WrongAnimal &copy )
{
    if (this != &copy)
    {
        // Copy the attributes from src to this object
    }
    std::cout << "<WrongAnimal ASSIGNATION OPERATOR CALLED>" << std::endl;
    return (*this);
}

// ########## WrongAnimal METHODES ##########

std::string WrongAnimal::getType( void ) const
{
    return (this->_type);
}

void WrongAnimal::setType( std::string _type )
{
    this->_type = _type;
}

void WrongAnimal::makeSound( void ) const
{ 
    std::cout << "WrongAnimal: WrongAnimal sound!" << std::endl;
}
