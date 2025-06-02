/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febouana <febouana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 18:17:06 by febouana          #+#    #+#             */
/*   Updated: 2025/04/10 18:37:43 by febouana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.class.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    if (N <= 0)
        return (NULL);
    Zombie *horde = new Zombie[N];
    if (!horde)
    {
        std::cerr << "Error: Allocation failed" << std::endl;
        return (NULL);
    }
    for (int i = 0; i < N; i++)
    {
        std::cout << "Zombie " << i + 1 << " created" << std::endl;
        horde[i].name_zombie(name);
        horde[i].announce();
    }
    return (horde);
}
