#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

#include <iostream>
#include <cmath>

class Fixed 
{
private:
    int _rawBits;  // nombre virgule fixe 
    const static int _fractionalBits;
public:
    Fixed( void );
    Fixed( const int nbr );
    Fixed( const float nbr );
    Fixed( const Fixed &src ); 
    ~Fixed( void );
    int getRawBits( void ) const;
    void setRawBits( int const raw );
    Fixed& operator=( const Fixed &src );
    float toFloat( void ) const;
    int toInt( void ) const;
};

std::ostream& operator<<( std::ostream &o, Fixed const &fixed ); //+

#endif 