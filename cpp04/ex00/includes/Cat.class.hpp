#ifndef CAT_CLASS_HPP
#define CAT_CLASS_HPP

#include "Animal.class.hpp"

class Cat : public Animal
{
public:
    //canon
    Cat( void );
    Cat( const Cat &src );
    ~Cat( void );
    Cat& operator=( const Cat &src );
    //methode == fonction membre virtuelle
    void makeSound( void ) const;
};

#endif