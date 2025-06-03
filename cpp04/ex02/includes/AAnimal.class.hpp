#ifndef AAnimal_CLASS_HPP
#define AAnimal_CLASS_HPP

#include <iostream>
#include <string>

class AAnimal 
{
private :
    std::string _type;
public:
    //canon
    AAnimal( void );
    AAnimal( const AAnimal &src );
    virtual ~AAnimal( void );
    AAnimal& operator=( const AAnimal &src );
    //methode == fonction membre virtuelle
    virtual void makeSound( void ) const = 0;
    //getters/setters
    std::string getType( void ) const;
    void setType( std::string type );
    //Cat/Dog/Brain : getters + setters
    virtual void setIdeas( int index, std::string idea ) = 0; 
    virtual std::string getIdeas( int index ) const = 0;
};

#endif
