/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febouana <febouana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 21:19:49 by febouana          #+#    #+#             */
/*   Updated: 2025/06/01 21:30:02 by febouana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

#include <iostream>

class Fixed 
{
private:
    static const int _fractionalBits; 
    int _rawBits;
public:
    Fixed( void ); //! canon
    Fixed( const Fixed &src ); //! canon
    ~Fixed( void ); //! canon
    Fixed& operator=( const Fixed &src ); //! canon
    int getRawBits( void ) const; // qui retourne la valeur du nombre à virgule fixe sans la convertir
    void setRawBits( int const raw ); // qui initialise la valeur du nombre à virgule fixe avec celle passée en paramètre
};

#endif 
