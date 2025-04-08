#ifndef DOG_CLASS_HPP
#define DOG_CLASS_HPP

#include "Animal.class.hpp"

class Dog : public Animal
{
public:
    //canon
    Dog( void );
    Dog( const Dog &src );
    ~Dog( void );
    Dog& operator=( const Dog &src );
    //methode == fonction membre virtuelle
    void makeSound( void ) const;
};

#endif