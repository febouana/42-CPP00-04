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
        int _nbr_contact; // pas grd interet de le mettre en static comme pas de presence de plusieurs instances ?
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