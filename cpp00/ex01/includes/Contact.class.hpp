/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febouana <febouana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 18:38:51 by febouana          #+#    #+#             */
/*   Updated: 2025/04/09 18:38:52 by febouana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream> //cout cin...
#include <cctype>

class Contact 
{
    private :
        std::string _first_name;
        std::string _last_name;
        std::string _nick_name;
        std::string _phone_number;
        std::string _darkest_secret;
    public :
        Contact();
        ~Contact();
        void set_first_name( std::string first_name );
        void set_last_name( std::string last_name );
        void set_nick_name( std::string nick_name );
        void set_phone_number( std::string phone_number );
        void set_darkest_secret( std::string darkest_secret );
        std::string get_first_name( void );
        std::string get_last_name( void );
        std::string get_nick_name( void );
        std::string get_phone_number( void );
        std::string get_darkest_secret( void );
};

#endif