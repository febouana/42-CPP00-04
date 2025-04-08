#include "../includes/AAnimal.class.hpp"

// ########## AAnimal CANON ##########

AAnimal::AAnimal( void )
{
    this->_type = "AAnimal";
    std::cout << "<AAnimal CONSTRUCTOR CALLED>" << std::endl;
}

AAnimal::AAnimal( const AAnimal &copy )
{
    *this = copy;
    std::cout << "<AAnimal COPY CONSTRUCTOR CALLED>" << std::endl;
}

AAnimal::~AAnimal( void )
{
    std::cout << "<AAnimal DESTRUCTOR CALLED>" << std::endl;
}

AAnimal& AAnimal::operator=( const AAnimal &copy )
{
    if (this != &copy)
    {
        // Copy the attributes from src to this object
    }
    std::cout << "<AAnimal ASSIGNATION OPERATOR CALLED>" << std::endl;
    return (*this);
}

// ########## AAnimal METHODES ##########

std::string AAnimal::getType( void ) const
{
    return (this->_type);
}

void AAnimal::setType( std::string _type )
{
    this->_type = _type;
}

void AAnimal::makeSound( void ) const
{ 
    std::cout << "AAnimal: AAnimal sound!" << std::endl;
}

// ########## CAT DOG BRAIN GETTERS + SETTERS ##########

void AAnimal::setIdeas( int index, std::string idea )
{
    (void)index;
    (void)idea;
    std::cout << "AAnimal has no ideas to set." << std::endl;
}

std::string AAnimal::getIdeas( int index ) const
{
    (void)index;
    return "AAnimal has no ideas.";
}
