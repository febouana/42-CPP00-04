/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apoet <apoet@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 19:05:14 by febouana          #+#    #+#             */
/*   Updated: 2025/05/21 19:17:22 by apoet            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.class.hpp"

// stack donc tout se passe dans ce scop
void randomChump( std::string name )
{
    Zombie chump;
    chump.name_zombie(name);
    chump.announce();
}