/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febouana <febouana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 19:06:14 by febouana          #+#    #+#             */
/*   Updated: 2025/04/10 18:30:59 by febouana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/HumanB.class.hpp"

HumanB::HumanB( std::string new_name )
{
    _name = new_name;
    _weapon = NULL;
}

HumanB::~HumanB( void )
{
    return ;
}

void HumanB::attack( void ) const 
{
    std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
}

void HumanB::setWeapon( Weapon &new_weapon )
{
    _weapon = &new_weapon;
}
