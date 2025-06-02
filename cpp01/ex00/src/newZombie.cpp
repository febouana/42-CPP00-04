/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apoet <apoet@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 19:05:12 by febouana          #+#    #+#             */
/*   Updated: 2025/05/21 19:13:57 by apoet            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.class.hpp"

Zombie* newZombie( std::string name )
{
    Zombie *zombie_heap = new Zombie();
    if (!zombie_heap)
    {
        std::cerr << "Error: Allocation failed" << std::endl;
        return (NULL);
    }
    zombie_heap->name_zombie(name);
    zombie_heap->announce();
    return (zombie_heap);
}
