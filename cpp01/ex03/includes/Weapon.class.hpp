/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febouana <febouana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 19:06:39 by febouana          #+#    #+#             */
/*   Updated: 2025/04/09 19:06:40 by febouana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_CLASS_H
# define WEAPON_CLASS_H

#include <iostream>
#include <string>

class Weapon 
{
private :
    std::string _type;
public :
    Weapon( std::string type );
    ~Weapon( void );
    void setType( std::string new_type );
    const std::string &getType( void ) const; 
};

#endif
