#ifndef POLYMORPHISME_HPP
#define POLYMORPHISME_HPP

#include <iostream>
#include <string>

// class Dallas 
// {
// public:
//     Dallas( void ); //canon
//     Dallas( const Dallas &src ); //canon
//     ~Dallas( void ); //canon
//     Dallas& operator=( const Dallas &src ); //canon
// };

class Animal 
{
private :
    std::string _type;
public:
    //canon
    Animal( void );
    Animal( const Animal &src );
    ~Animal( void );
    Animal& operator=( const Animal &src );
    //methode == fonction membre virtuelle
    virtual void makeSound( void ) const;
    //getters/setters
    std::string getType( void ) const;
    void setType( std::string type );
};

class Cat : public Animal
{
public:
    //canon
    Cat( void );
    Cat( const Cat &src );
    ~Cat( void );
    Cat& operator=( const Cat &src );
    //methode == fonction membre virtuelle
    virtual void makeSound( void ) const;
};

class Dog : public Animal 
{
public:
    //canon
    Dog( void );
    Dog( const Dog &src );
    ~Dog( void );
    Dog& operator=( const Dog &src );
    //methode == fonction membre virtuelle
    virtual void makeSound( void ) const;
};

#endif