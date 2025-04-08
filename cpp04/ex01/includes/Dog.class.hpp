#ifndef DOG_CLASS_HPP
#define DOG_CLASS_HPP

#include "Animal.class.hpp"
#include "Brain.class.hpp"

class Dog : public Animal
{
private : 
    Brain* brain;
public:
    //canon
    Dog( void );
    Dog( const Dog &src );
    ~Dog( void );
    Dog& operator=( const Dog &src );
    //methode == fonction membre virtuelle
    void makeSound( void ) const;
    //Brain getters + setters
    std::string getIdeas( int i ) const;
    void setIdeas( int i, std::string idea );
};

#endif