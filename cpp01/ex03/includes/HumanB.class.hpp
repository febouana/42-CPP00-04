/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febouana <febouana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 19:06:37 by febouana          #+#    #+#             */
/*   Updated: 2025/04/10 18:31:11 by febouana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_CLASS_H
# define HUMANB_CLASS_H

#include "Weapon.class.hpp"

class HumanB
{
private :
    std::string _name;
    Weapon *_weapon;
public :
    HumanB( std::string new_name );
    ~HumanB( void );
    void attack( void ) const;
    void setWeapon( Weapon &new_weapon );
};

#endif
