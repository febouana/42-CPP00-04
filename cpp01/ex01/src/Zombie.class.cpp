/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febouana <febouana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 18:17:03 by febouana          #+#    #+#             */
/*   Updated: 2025/04/10 18:17:04 by febouana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.class.hpp"

Zombie::Zombie( void )
{
    return ;
}

Zombie::~Zombie( void )
{
    std::cout << _name << ": *dies, again*" << std::endl;
}

void Zombie::name_zombie( std::string name )
{
    _name = name;
}

void Zombie::announce( void ) const
{
    std::cout << _name << ": I'm alive! BraiiiiiiinnnzzzZ..." << std::endl;
}
