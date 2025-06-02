/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febouana <febouana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 21:55:12 by febouana          #+#    #+#             */
/*   Updated: 2025/06/01 21:55:13 by febouana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

    //Increment and decrement operators
    Fixed& operator++( void ); //pre-increment
    Fixed operator++( int ); //post-increment
    Fixed& operator--( void ); //pre-decrement
    Fixed operator--( int ); //post-decrement

    //Comparison operators
    bool operator>( const Fixed &src ) const;
    bool operator<( const Fixed &src ) const;
    bool operator>=( const Fixed &src ) const;
    bool operator<=( const Fixed &src ) const;
    bool operator==( const Fixed &src ) const;
    bool operator!=( const Fixed &src ) const;

    //Arithmetic operators
    float operator+( const Fixed &src ) const;
    float operator-( const Fixed &src ) const;
    float operator*( const Fixed &src ) const;
    float operator/( const Fixed &src ) const;

    //Comparison operators
    static Fixed& max( Fixed &a, Fixed &b );
    static const Fixed& max( Fixed const &a, Fixed const &b );
    static Fixed& min( Fixed &a, Fixed &b );
    static const Fixed& min( Fixed const &a, Fixed const &b );



};

std::ostream& operator<<( std::ostream &o, Fixed const &fixed ); //+

#endif 