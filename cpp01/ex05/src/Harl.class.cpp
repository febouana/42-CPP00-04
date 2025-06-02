/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febouana <febouana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 19:07:13 by febouana          #+#    #+#             */
/*   Updated: 2025/04/09 19:07:14 by febouana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Harl.class.hpp"

Harl::Harl( void )
{
}

Harl::~Harl( void )
{
}

void Harl::debug( void )
{
    std::cout << "[ DEBUG ]\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl << std::endl;
}

void Harl::info( void )
{
    std::cout << "[ INFO ]\nI cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl << std::endl;
}

void Harl::warning( void )
{
    std::cout << "[ WARNING ]\nI think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl << std::endl;
}

void Harl::error( void )
{
    std::cout << "[ ERROR ]\nThis is unacceptable! I want to speak to the manager now." << std::endl << std::endl;
}

void Harl::complain( std::string level )
{
    void(Harl::*function[])() = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error } ;
    const std::string levels[] = {"DEBUG","INFO","WARNING","ERROR"};

    for (int i = 0; i < 4; i++)
        if (!levels[i].compare(level))
            return ((this->*function[i])()); //de-reférence le ptr sur fn membre et appelle la methode correspondante avec this
    std::cout << "Invalid level: enter DEBUG or INFO or WARNING or ERROR" << std::endl;
    return ;
}
