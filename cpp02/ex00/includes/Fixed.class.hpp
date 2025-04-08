#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

#include <iostream>

class Fixed 
{
private:
    int _rawBits;  // val du nbr a virgule
    const static int fractionalBits; 
public:
    Fixed( void ); //!canon
    Fixed( const Fixed &src ); //!canon
    ~Fixed( void ); //!canon
    int getRawBits( void ) const; //qui retourne la valeur du nombre à virgule fixe sans la convertir
    void setRawBits( int const raw ); //qui initialise la valeur du nombre à virgule fixe avec celle passée en paramètre
    Fixed& operator=( const Fixed &src ); //!canon
};

#endif 