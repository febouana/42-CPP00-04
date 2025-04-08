#ifndef ANIMAL_CLASS_HPP
#define ANIMAL_CLASS_HPP

#include <iostream>
#include <string>

class Animal 
{
private :
    std::string _type;
public:
    //canon
    Animal( void );
    Animal( const Animal &src );
    virtual ~Animal( void );
    Animal& operator=( const Animal &src );
    //methode == fonction membre virtuelle
    virtual void makeSound( void ) const; //? virtual
    //getters/setters
    std::string getType( void ) const;
    void setType( std::string type );
};

#endif




// class Dallas 
// {
// public:
//     Dallas( void ); //canon
//     Dallas( const Dallas &src ); //canon
//     ~Dallas( void ); //canon
//     Dallas& operator=( const Dallas &src ); //canon
// };
