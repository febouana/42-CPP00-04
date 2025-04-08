#include "../includes/WrongCat.class.hpp"

// ########## WRONGCAT CANON #####################################################################################

WrongCat::WrongCat( void ) : WrongAnimal()
{
    setType("WrongCat");
    std::cout << "<WRONGCAT CONSTRUCTOR CALLED>" << std::endl;
}

WrongCat::WrongCat( const WrongCat &copy ) : WrongAnimal( copy )
{
    *this = copy;
    std::cout << "<WRONGCAT COPY CONSTRUCTOR CALLED>" << std::endl;
}

WrongCat::~WrongCat( void )
{
    std::cout << "<WRONGCAT DESTRUCTOR CALLED>" << std::endl;
}

WrongCat& WrongCat::operator=( const WrongCat &src )
{
    if (this != &src)
    {
        setType(src.getType());    
    }
    std::cout << "<WRONGCAT ASSIGNATION OPERATOR CALLED>" << std::endl;
    return (*this);
}

void WrongCat::makeSound( void ) const
{
    std::cout << "WRONGCAT: Meuuuh!" << std::endl;
}
