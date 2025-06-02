/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febouana <febouana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 21:55:06 by febouana          #+#    #+#             */
/*   Updated: 2025/06/02 14:51:49 by febouana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.class.hpp"

int main( void ) 
{
    Fixed   a;
    Fixed   const  b( Fixed( 5.05f) * Fixed( 2 ) );

    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;

    std::cout << b << std::endl;
    
    std::cout << Fixed::max( a, b ) << std::endl;

    return 0;
}

// int main(void)
// {
//     Fixed a(10);
//     Fixed b(20);
//     Fixed c(10);

//     std::cout << "\n===== Testing comparison operators =====\n";
//     std::cout << "a==" << a << ", b==" << b << ", c==" << a << std::endl;
//     std::cout << "a > b: " << (a > b) << std::endl;
//     std::cout << "a < b: " << (a < b) << std::endl;
//     std::cout << "a >= c: " << (a >= c) << std::endl;
//     std::cout << "b <= a: " << (b <= a) << std::endl;
//     std::cout << "a == c: " << (a == c) << std::endl;
//     std::cout << "a != b: " << (a != b) << std::endl;

//     std::cout << "\n===== Testing arithmetic operators =====\n";
//     std::cout << "a + b = " << a + b << std::endl;
//     std::cout << "b - a = " << b - a << std::endl;
//     std::cout << "a * b = " << a * b << std::endl;
//     std::cout << "b / a = " << b / a << std::endl;

//     std::cout << "\n===== Testing min/max functions =====\n";
//     std::cout << "min(a, b) = " << Fixed::min(a, b) << std::endl;
//     std::cout << "max(a, b) = " << Fixed::max(a, b) << std::endl;

//     return (0);
// }
