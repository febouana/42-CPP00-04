#include "../includes/PhoneBook.class.hpp"

// Quand contact == 8/8 on reecrit systematiquement sur le premier ou on defile encore ?

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
