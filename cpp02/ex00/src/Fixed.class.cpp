#include "../includes/Fixed.class.hpp"

const int fractionalBits = 8;

Fixed::Fixed( void )
{
    std::cout << "Default constructor called" << std::endl;
    this->setRawBits(0);
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
    std::cout << "getRawBits member function called" << std::endl;
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
    if (this != &src) //evite d'ecraser des donnes si meme chose (src = src ==> ecrase potentiellemnt l'obj lui meme)
        this->setRawBits(this->getRawBits());
    return (*this);
}