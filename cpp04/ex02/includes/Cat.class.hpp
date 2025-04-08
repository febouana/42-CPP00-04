#ifndef CAT_CLASS_HPP
#define CAT_CLASS_HPP

#include "AAnimal.class.hpp"
#include "Brain.class.hpp"

class Cat : public AAnimal
{
private : 
    Brain* brain;
public:
    //canon
    Cat( void );
    Cat( const Cat &src );
    ~Cat( void );
    Cat& operator=( const Cat &src );
    //methode == fonction membre virtuelle
    void makeSound( void ) const;
    //Brain getters + setters
    std::string getIdeas( int i ) const;
    void setIdeas( int i, std::string idea );
};

#endif