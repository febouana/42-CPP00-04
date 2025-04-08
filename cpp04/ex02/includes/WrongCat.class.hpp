#ifndef WRONGCAT_CLASS_HPP
#define WRONGCAT_CLASS_HPP

#include "WrongAnimal.class.hpp"

class WrongCat : public WrongAnimal
{
public:
    //canon
    WrongCat( void );
    WrongCat( const WrongCat &src );
    ~WrongCat( void );
    WrongCat& operator=( const WrongCat &src );
    //methode == fonction membre virtuelle
    void makeSound( void ) const;
};

#endif