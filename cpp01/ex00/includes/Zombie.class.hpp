/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febouana <febouana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 19:05:07 by febouana          #+#    #+#             */
/*   Updated: 2025/04/10 18:14:01 by febouana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_CLASS_HPP
#define ZOMBIE_CLASS_HPP

#include <iostream>
#include <string>

class Zombie
{
private :
    std::string _name;
public:
    Zombie( void );
    ~Zombie( void );
    void name_zombie( std::string name );
    void announce( void ) const;
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif
