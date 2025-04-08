#include "../includes/WrongAnimal.class.hpp"

// ########## WRONGANIMAL CANON ##########

WrongAnimal::WrongAnimal( void )
{
    this->_type = "WrongAnimal";
    std::cout << "<WRONGANIMAL CONSTRUCTOR CALLED>" << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal &copy )
{
    *this = copy;
    std::cout << "<WRONGANIMAL COPY CONSTRUCTOR CALLED>" << std::endl;
}

WrongAnimal::~WrongAnimal( void )
{
    std::cout << "<WRONGANIMAL DESTRUCTOR CALLED>" << std::endl;
}

WrongAnimal& WrongAnimal::operator=( const WrongAnimal &copy )
{
    if (this != &copy)
    {
        // Copy the attributes from src to this object
    }
    std::cout << "<WRONGANIMAL ASSIGNATION OPERATOR CALLED>" << std::endl;
    return (*this);
}

// ########## WRONGANIMAL METHODES ##########

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
    std::cout << "WRONGANIMAL: WrongAnimal sound!" << std::endl;
}
