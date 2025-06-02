/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febouana <febouana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 18:38:23 by febouana          #+#    #+#             */
/*   Updated: 2025/04/09 18:38:24 by febouana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Contact.class.hpp"

Contact::Contact()
{
}

Contact::~Contact()
{
}

void Contact::set_first_name( std::string first_name )
{
    this->_first_name = first_name;
}

void Contact::set_last_name( std::string last_name )
{
    this->_last_name = last_name;
}

void Contact::set_nick_name( std::string nick_name )
{
    this->_nick_name = nick_name;
}

void Contact::set_phone_number( std::string phone_number )
{
    this->_phone_number = phone_number;
}

void Contact::set_darkest_secret( std::string darkest_secret )
{
    this->_darkest_secret = darkest_secret;
}

std::string Contact::get_first_name( void )
{
    return (this->_first_name);
}

std::string Contact::get_last_name( void )
{
    return (this->_last_name);
}

std::string Contact::get_nick_name( void )
{
    return (this->_nick_name);
}

std::string Contact::get_phone_number( void )
{
    return (this->_phone_number);
}

std::string Contact::get_darkest_secret( void )
{
    return (this->_darkest_secret);
}
