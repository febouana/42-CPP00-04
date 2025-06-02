/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HarlFilter.class.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febouana <febouana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 19:07:23 by febouana          #+#    #+#             */
/*   Updated: 2025/04/09 19:07:24 by febouana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARDFILTER_CLASS_HPP
# define HARDFILTER_CLASS_HPP

#include <iostream>
#include <string>

class harlFilter
{
private:
    void debug( void );
    void info( void );
    void warning( void ); 
    void error( void );
public:
    harlFilter( void );
    ~harlFilter( void );
    void complain( std::string level );
};

#endif

