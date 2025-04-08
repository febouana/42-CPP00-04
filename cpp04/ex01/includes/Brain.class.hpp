#ifndef BRAIN_CLASS_HPP
#define BRAIN_CLASS_HPP

#include <iostream>
#include <string>

class Brain 
{
private:
    std::string _ideas[100];
public:
    // canon
    Brain( void );
    Brain( const Brain &src );
    ~Brain( void );
    Brain& operator=( const Brain &src );
    // getters + setters
    std::string getIdeas( int index ) const;
    std::string setIdeas( int index, std::string idea );
};

#endif


