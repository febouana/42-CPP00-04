/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febouana <febouana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 18:38:26 by febouana          #+#    #+#             */
/*   Updated: 2025/04/09 18:38:34 by febouana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.class.hpp"

int main()
{
    PhoneBook phonebook;
    std::string command;

    while (command != "EXIT")
    {
        std::cout << "Enter ADD to save a new contact, SEARCH to display your phone book or EXIT to leave the program:" << std::endl; 
        std::cout << ">";
        if (!std::getline(std::cin, command))
            return (std::cout << "SIGNAL DETECTED" << std::endl, 1);
        if (command == "ADD")
            if (phonebook.add() == false)
                return (1);
        if (command == "SEARCH")
            if (phonebook.search() == false)
                return (1);    
        std::cout << std::endl;
    }
    return (0);
}
