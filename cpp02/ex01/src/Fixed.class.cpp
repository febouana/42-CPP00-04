#include "../includes/Fixed.class.hpp"

const int Fixed::_fractionalBits = 8;

Fixed::Fixed( void ) : _rawBits(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const int nbr )
{
    std::cout << "Int constructor called" << std::endl;
    this->_rawBits = nbr << _fractionalBits; // Décalage à gauche pour convertir en fixed-point
}

Fixed::Fixed( const float nbr ) //arrondi avec roundf
{
    std::cout << "Float constructor called" << std::endl;
    this->_rawBits = roundf(nbr * (1 << _fractionalBits)); // Conversion en fixed-point
}

Fixed::Fixed( const Fixed &src ) : _rawBits(src._rawBits)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

Fixed::~Fixed( void )
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void ) const
{
    // std::cout << "getRawBits member function called" << std::endl;
    return (this->_rawBits);
}

void Fixed::setRawBits( int const raw )
{
    this->_rawBits = raw;
}

// operateur d'affection
Fixed& Fixed::operator=( const Fixed &src )
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &src)
        this->setRawBits(src.getRawBits());
    return (*this);
}

//! a reviser 
float	Fixed::toFloat( void ) const
{
	return ((float)this->_rawBits / (float)(1 << this->_fractionalBits));
}

int Fixed::toInt( void ) const
{
    return (this->_rawBits >> _fractionalBits); //decale de 8bits a droite (/ 256 ou 2^8)
}

//! a reviser 
std::ostream& operator<<( std::ostream &o, Fixed const &fixed )
{
    o << fixed.toFloat();
    return (o);
}
