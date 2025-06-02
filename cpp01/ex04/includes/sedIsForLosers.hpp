/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sedIsForLosers.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febouana <febouana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 19:06:48 by febouana          #+#    #+#             */
/*   Updated: 2025/04/09 19:06:49 by febouana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SEDISFORLOSERS_HPP
#define SEDISFORLOSERS_HPP

#include <iostream>
#include <fstream> //std::ifstream
#include <string>

class sedIsForLosers
{
public : 
    sedIsForLosers( void );
    ~sedIsForLosers( void );
    static void replace_in_new_file( std::ofstream &new_file, std::string line, std::string s1, std::string s2 );
};

#endif