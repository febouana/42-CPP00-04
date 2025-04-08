#ifndef HARDFILTER_CLASS_HPP
# define HARDFILTER_CLASS_HPP

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

