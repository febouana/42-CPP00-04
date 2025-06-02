/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febouana <febouana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 21:31:31 by febouana          #+#    #+#             */
/*   Updated: 2025/06/01 21:51:32 by febouana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.class.hpp"

const int Fixed::_fractionalBits = 8;

//? Constructeur par default, initialise _rawBits a 0.
Fixed::Fixed( void )
{
    std::cout << "Default constructor called" << std::endl;
    this->setRawBits(0);
}

//? Constructeur avec entier, convertit l'entier en nombre a virgule fixe.
Fixed::Fixed( const int nbr )
{
    std::cout << "Int constructor called" << std::endl;
    this->_rawBits = nbr << _fractionalBits; // Décalage à gauche pour convertir en fixed-point
}

//? Constructeur avec float, convertit le float en nombre a virgule.
Fixed::Fixed( const float nbr ) //arrondi avec roundf
{
    std::cout << "Float constructor called" << std::endl;
    this->_rawBits = roundf(nbr * (1 << _fractionalBits)); // Conversion en fixed-point
}

//? Constructeur de copie, cree uen copie d'un objet Fixed exisant.
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

//? Surcharge d'operateur d'affectation.
Fixed& Fixed::operator=( const Fixed &src )
{
    std::cout << "Copy assignment operator called" << std::endl;
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
