/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apoet <apoet@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 19:05:17 by febouana          #+#    #+#             */
/*   Updated: 2025/05/21 19:13:25 by apoet            ###   ########.fr       */
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