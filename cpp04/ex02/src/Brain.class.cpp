#include "../includes/Brain.class.hpp"

// ########## BRAIN CANON #####################################################################################

Brain::Brain( void )
{
    std::cout << "{BRAIN CONSTRUCTOR CALLED}" << std::endl;
}

Brain::Brain( const Brain &src )
{
    *this = src;
    std::cout << "{BRAIN COPY CONSTRUCTOR CALLED}" << std::endl;
}

Brain::~Brain( void )
{
    std::cout << "{BRAIN DESTRUCTOR CALLED}" << std::endl;
}

Brain& Brain::operator=( const Brain &src )
{
    for (int i = 0; i < 100; ++i)
        this->_ideas[i] = src._ideas[i];
    std::cout << "{BRAIN ASSIGNATION OPERATOR CALLED}" << std::endl;
    return *this;
}

// ########## BRAIN GETTERS ###################################################################################

std::string Brain::getIdeas( int index ) const
{
    return (this->_ideas[index]);
}

// ########## BRAIN SETTERS ###################################################################################

void Brain::setIdeas( int index, std::string idea )
{
    this->_ideas[index] = idea;
}