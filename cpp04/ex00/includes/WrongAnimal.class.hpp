#ifndef WRONGANIMAL_CLASS_HPP
#define WRONGANIMAL_CLASS_HPP

#include <iostream>
#include <string>

class WrongAnimal 
{
private :
    std::string _type;
public:
    //canon
    WrongAnimal( void );
    WrongAnimal( const WrongAnimal &src );
    virtual ~WrongAnimal( void ); //? virtual
    WrongAnimal& operator=( const WrongAnimal &src );
    //methode == fonction membre virtuelle
    void makeSound( void ) const; //? pas virtual
    //getters/setters
    std::string getType( void ) const;
    void setType( std::string type );
};

#endif