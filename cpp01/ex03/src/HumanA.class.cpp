/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febouana <febouana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 19:06:16 by febouana          #+#    #+#             */
/*   Updated: 2025/04/09 19:06:17 by febouana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/HumanA.class.hpp"

HumanA::HumanA( std::string new_name,  Weapon &new_weapon) : _name(new_name), _weapon(new_weapon)
{
}

HumanA::~HumanA( void )
{
    return ;
}

void HumanA::attack( void ) const
{
    std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}
