/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febouana <febouana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 19:06:02 by febouana          #+#    #+#             */
/*   Updated: 2025/04/09 19:06:03 by febouana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Weapon.class.hpp"

Weapon::Weapon( std::string type )
{
    setType( type );
}

Weapon::~Weapon( void )
{
    return ;
}

void Weapon::setType( std::string new_type )
{
    _type = new_type;
}

const std::string &Weapon::getType( void ) const
{
    return (_type);
}
