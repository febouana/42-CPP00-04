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
    std::cout << "<CAT COPY CONSTRUCTOR CALLED>" << std::endl;
    // Deep copy - important to create a NEW Brain
    this->brain = new Brain();
    // Copy the brain contents
    if (copy.brain)
    {
        for (int i = 0; i < 100; i++)
        {
            this->setIdeas(i, copy.getIdeas(i));
        }
    }
}

Cat::~Cat( void )
{
    delete this->brain;
    std::cout << "<CAT DESTRUCTOR CALLED>" << std::endl;
}

Cat& Cat::operator=( const Cat &src )
{
    std::cout << "<CAT ASSIGNATION OPERATOR CALLED>" << std::endl;
    if (this != &src)
    {
        Animal::operator=(src);
        if (this->brain)
        {
            delete this->brain;
            this->brain = NULL;
        }
        this->brain = new Brain();
        if (src.brain)
        {
            for (int i = 0; i < 100; i++)
            {
                this->setIdeas(i, src.getIdeas(i));
            }
        }
    }
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