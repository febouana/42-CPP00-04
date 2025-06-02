/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febouana <febouana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 19:06:34 by febouana          #+#    #+#             */
/*   Updated: 2025/04/10 18:31:13 by febouana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_CLASS_H
# define HUMANA_CLASS_H

# include "Weapon.class.hpp"

class HumanA
{
private :
    std::string _name;
    Weapon &_weapon;
public :
    HumanA( std::string new_name, Weapon &new_weapon );
    ~HumanA( void );
    void attack( void ) const;
};

#endif
