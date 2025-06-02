/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febouana <febouana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 18:38:54 by febouana          #+#    #+#             */
/*   Updated: 2025/04/09 18:39:02 by febouana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
#define PHONEBOOK_CLASS_HPP

#include "Contact.class.hpp"
#include <iostream>
#include <string>
#include <iomanip> //setw()
#include <cctype>
#include <cstdlib>

class PhoneBook 
{
    private :
        int _nbr_contact;
        int _nbr_rewrite;
    public :
        Contact contact[8];
        PhoneBook();
        ~PhoneBook();
        void add_nbr_contact( void );
        int get_nbr_contact( void ); 
        bool add( void );
        bool add_contact( int index );
        bool search( void );
        bool search_contact( void ); //
        void display_contact_info( int index );
};

#endif