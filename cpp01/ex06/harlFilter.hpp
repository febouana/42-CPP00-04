#ifndef HARD_FILTER_HPP
# define HARD_FILTER_HPP

#include <iostream>
#include <string>

class harlFilter
{
private:
    void debug( void );
    void info( void );
    void warning( void ); 
    void error( void );
public:
    harlFilter( void );
    ~harlFilter( void );
    void complain( std::string level );
};

#endif

