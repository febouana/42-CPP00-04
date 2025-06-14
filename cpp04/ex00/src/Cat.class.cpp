#include "../includes/Cat.class.hpp"

// ########## CAT CANON #####################################################################################

Cat::Cat( void ) : Animal()
{
    setType("Cat");
    std::cout << "<CAT CONSTRUCTOR CALLED>" << std::endl;
}

Cat::Cat( const Cat &copy ) : Animal( copy )
{
    std::cout << "<CAT COPY CONSTRUCTOR CALLED>" << std::endl;
    setType(copy.getType());
}

Cat::~Cat( void )
{
    std::cout << "<CAT DESTRUCTOR CALLED>" << std::endl;
}

Cat& Cat::operator=( const Cat &src )
{
    std::cout << "<CAT ASSIGNATION OPERATOR CALLED>" << std::endl;
    if (this != &src)
    {
        setType(src.getType());    
    }
    return (*this);
}

void Cat::makeSound( void ) const
{
    std::cout << "CAT: Meow!" << std::endl;
}
