#include "../includes/Cat.class.hpp"

// ########## CAT CANON #####################################################################################

Cat::Cat( void ) : Animal()
{
    setType("Cat");
    std::cout << "<CAT CONSTRUCTOR CALLED>" << std::endl;
    this->brain = new Brain();
}

Cat::Cat( const Cat &copy ) : Animal( copy )
{
    *this = copy;
    std::cout << "<CAT COPY CONSTRUCTOR CALLED>" << std::endl;
}

Cat::~Cat( void )
{
    delete this->brain;
    std::cout << "<CAT DESTRUCTOR CALLED>" << std::endl;
}

Cat& Cat::operator=( const Cat &src )
{
    if (this != &src)
    {
        setType(src.getType());    
    }
    std::cout << "<CAT ASSIGNATION OPERATOR CALLED>" << std::endl;
    return (*this);
}

void Cat::makeSound( void ) const
{
    std::cout << "CAT: Meow!" << std::endl;
}

// ########## BRAIN GETTERS ###################################################################################

std::string Cat::getIdeas( int index ) const
{
    if (index < 0 || index >= 100)
        return ("");
    return (this->brain->getIdeas(index));
}

// ########## BRAIN SETTERS ###################################################################################

void Cat::setIdeas( int index, std::string idea )
{
    if (index < 0 || index >= 100)
        return ;
    this->brain->setIdeas(index, idea);
}