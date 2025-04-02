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
    Fixed( void ); //!canon
    Fixed( const int nbr ); //+
    Fixed( const float nbr ); //+
    Fixed( const Fixed &src ); //!canon
    ~Fixed( void ); //!canon
    int getRawBits( void ) const; //qui retourne la valeur du nombre à virgule fixe sans la convertir
    void setRawBits( int const raw ); //qui initialise la valeur du nombre à virgule fixe avec celle passée en paramètre
    Fixed& operator=( const Fixed &src ); //!canon
    float toFloat( void ) const; //+
    int toInt( void ) const; //+
};

std::ostream& operator<<( std::ostream &o, Fixed const &fixed ); //+

#endif 