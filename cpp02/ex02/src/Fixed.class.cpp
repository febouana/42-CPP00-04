/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febouana <febouana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 21:55:08 by febouana          #+#    #+#             */
/*   Updated: 2025/06/02 14:51:00 by febouana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.class.hpp"

const int Fixed::_fractionalBits = 8;

Fixed::Fixed( void ) : _rawBits(0)
{
    // std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const int nbr )
{
    // std::cout << "Int constructor called" << std::endl;
    this->_rawBits = nbr << _fractionalBits; // Décalage à gauche pour convertir en fixed-point
}

Fixed::Fixed( const float nbr ) //arrondi avec roundf
{
    // std::cout << "Float constructor called" << std::endl;
    this->_rawBits = roundf(nbr * (1 << _fractionalBits)); // Conversion en fixed-point
}

Fixed::Fixed( const Fixed &src ) : _rawBits(src._rawBits)
{
    // std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

Fixed::~Fixed( void )
{
    // std::cout << "Destructor called" << std::endl;
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

//? Surcharge d'operateur d'affectation.
Fixed& Fixed::operator=( const Fixed &src )
{
    // std::cout << "Copy assignment operator called" << std::endl;
    if (this != &src)
        this->setRawBits(src.getRawBits());
    return (*this);
}

//? Convertit le nombre a virgule fixe en float.
float	Fixed::toFloat( void ) const
{
	return ((float)this->_rawBits / (float)(1 << this->_fractionalBits));
}

//? Convertit le nombre a virgule fixe en entier.
int Fixed::toInt( void ) const
{
    return (this->_rawBits >> _fractionalBits); //decale de 8bits a droite (/ 256 ou 2^8)
}

//? Convertit 'o' en float et l'affiche directement.
std::ostream& operator<<( std::ostream &o, Fixed const &fixed )
{
    o << fixed.toFloat();
    return (o);
}

//================================================================================================

float Fixed::operator+( const Fixed &src ) const
{
    return (this->toFloat() + src.toFloat());
}

float Fixed::operator-( const Fixed &src ) const
{
    return (this->toFloat() - src.toFloat());
}

float Fixed::operator*( const Fixed &src ) const
{
    return (this->toFloat() * src.toFloat());
}

float Fixed::operator/( const Fixed &src ) const
{
    return (this->toFloat() / src.toFloat());
}

// l'operateur ternaire "?:" compare deux elem et renvoi le plus grand 
Fixed& Fixed::max(Fixed &a, Fixed &b)
{
    return (a.getRawBits() > b.getRawBits() ? a : b);
}

const Fixed& Fixed::max(Fixed const &a, Fixed const &b)
{
    return (a.getRawBits() > b.getRawBits() ? a : b);
}

Fixed& Fixed::min(Fixed &a, Fixed &b)
{
    return (a.getRawBits() < b.getRawBits() ? a : b);
}

const Fixed& Fixed::min(Fixed const &a, Fixed const &b)
{
    return (a.getRawBits() < b.getRawBits() ? a : b);
}

//================================================================================================

bool Fixed::operator>( const Fixed &src ) const
{
    return (this->getRawBits() > src.getRawBits());
}

bool Fixed::operator<( const Fixed &src ) const
{
    return (this->getRawBits() < src.getRawBits());
}

bool Fixed::operator>=( const Fixed &src ) const
{
    return (this->getRawBits() >= src.getRawBits());
}

bool Fixed::operator<=( const Fixed &src ) const
{
    return (this->getRawBits() <= src.getRawBits());
}

bool Fixed::operator==( const Fixed &src ) const
{
    return (this->getRawBits() == src.getRawBits());
}

bool Fixed::operator!=( const Fixed &src ) const
{
    return (this->getRawBits() != src.getRawBits());
}

//================================================================================================

// Les 4 opérateurs d’incrémentation et de décrémentation (pré-incrémentation et
// post-incrémentation, pré-décrémentation et post-décrémentation) qui diminueront
// la valeur du nombre à virgule fixe d’unité ϵ tel que 1 + ϵ > 1.
Fixed& Fixed::operator++( void ) // pré-incrémentation (++a)
{
    this->_rawBits += 1;
    return (*this);
}

Fixed Fixed::operator++( int ) // post-incrémentation (a++)
{
    Fixed tmp(*this);
    this->_rawBits += 1;
    return (tmp);
}

Fixed& Fixed::operator--( void ) // pré-décrémentation (--a)
{
    this->_rawBits -= 1;
    return (*this);
}

Fixed Fixed::operator--( int ) // post-décrémentation (a--)
{
    Fixed tmp(*this);
    this->_rawBits -= 1;
    return (tmp);
}
