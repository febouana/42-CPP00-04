/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febouana <febouana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 18:17:00 by febouana          #+#    #+#             */
/*   Updated: 2025/04/10 18:38:02 by febouana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.class.hpp"

int main()
{
    Zombie* horde = zombieHorde(0, "ZOMBIE");
    if (!horde)
        return (1);
    delete[] horde;
}
