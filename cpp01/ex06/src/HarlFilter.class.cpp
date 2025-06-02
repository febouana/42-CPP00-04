/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HarlFilter.class.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apoet <apoet@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 19:07:29 by febouana          #+#    #+#             */
/*   Updated: 2025/05/21 19:43:34 by apoet            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/HarlFilter.class.hpp"

harlFilter::harlFilter( void )
{
}

harlFilter::~harlFilter( void )
{
}

void harlFilter::debug( void )
{
    std::cout << "[ DEBUG ]\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl << std::endl;
}

void harlFilter::info( void )
{
    std::cout << "[ INFO ]\nI cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger!\nIf you did, I wouldn’t be asking for more!" << std::endl << std::endl;
}

void harlFilter::warning( void )
{
    std::cout << "[ WARNING ]\nI think I deserve to have some extra bacon for free.\nI’ve been coming for years whereas you started working here since last month." << std::endl << std::endl;
}

void harlFilter::error( void )
{
    std::cout << "[ ERROR ]\nThis is unacceptable! I want to speak to the manager now." << std::endl << std::endl;
}

void harlFilter::complain( std::string level )
{
    
    void(harlFilter::*function[])() = { &harlFilter::debug, &harlFilter::info, &harlFilter::warning, &harlFilter::error } ;
    const std::string levels[] = {"DEBUG","INFO","WARNING","ERROR"};

    int i = 0;
    while(i < 4)
    {
        if (level == levels[i])
            break ;
        i++;
    }
    switch (i)
    {
        case (0):
            (this->*function[0])();
        case (1):
            (this->*function[1])();
        case (2):
            (this->*function[2])();
        case (3):
            (this->*function[3])();
            break;
        default :
            std::cout << "[ Blablabla... ]" << std::endl;
            break;
    }
}

// void harlFilter::complain( std::string level )
// {
//     void(harlFilter::*function[])() = { &harlFilter::debug, &harlFilter::info, &harlFilter::warning, &harlFilter::error } ;
//     const std::string levels[] = {"DEBUG","INFO","WARNING","ERROR"};

//     for (int i = 0; i < 4; i++)
//     {
//         if (!levels[i].compare(level))
//         {
//             while (i < 4)
//                 (this->*function[i++])();
//             return ;
//         }
//     }
//     std::cout << "[ Probably complaining about insignificant problems ]" << std::endl << std::endl;
// }
