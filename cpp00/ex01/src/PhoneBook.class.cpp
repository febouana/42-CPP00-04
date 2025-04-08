#include "../includes/PhoneBook.class.hpp"
#include "../includes/Contact.class.hpp"

PhoneBook::PhoneBook()
{
    this->_nbr_contact = 0;
    this->_nbr_rewrite = 0;
    std::cout << "Welcome to MyAwesomePhoneBook!" << std::endl;
}

PhoneBook::~PhoneBook()
{
    std::cout << "See you soon!" << std::endl;
}

int PhoneBook::get_nbr_contact( void )
{
    return (PhoneBook::_nbr_contact);
}

void PhoneBook::add_nbr_contact( void )
{
    this->_nbr_contact++;
}

bool PhoneBook::add( void )
{
    if (this->_nbr_contact < 8)
    {
        if (this->add_contact(this->_nbr_contact) == false) // Utiliser _nbr_contact pour l'index
            return (false);
        this->_nbr_contact++;
    }
    else
    {    
        std::cout << std::endl << "PhoneBook is full! Need to overwrite the oldest contact." << std::endl;
        if (this->add_contact(this->_nbr_rewrite) == false) // Utiliser _nbr_rewrite pour l'index circulaire
            return (false);
        this->_nbr_rewrite++;
        this->_nbr_rewrite = (this->_nbr_rewrite % 8); // Assurez-vous que _nbr_rewrite est dans les limites
    }
    std::cout << "\n✅ New contact added [" << this->_nbr_contact << "/8]\n";
    return (true);
}

bool PhoneBook::add_contact(int index)
{
    std::string command;

    while (command.empty())
    {
        std::cout << "\nFirst name:\n>";
        if (!std::getline(std::cin, command))
            return std::cout << "\nSIGNAL DETECTED\n", false;
    }
    this->contact[index].set_first_name(command);
    command = "";
    while (command.empty())
    {
        std::cout << "\nLast name:\n>";
        if (!std::getline(std::cin, command))
            return std::cout << "\nSIGNAL DETECTED\n", false;
    }
    this->contact[index].set_last_name(command);
    command = "";
    while (command.empty())
    {
        std::cout << "\nNick name:\n>";
        if (!std::getline(std::cin, command))
            return std::cout << "\nSIGNAL DETECTED\n", false;
    }
    this->contact[index].set_nick_name(command);
    command = "";
    while (command.empty())
    {
        std::cout << "\nPhone number:\n>";
        if (!std::getline(std::cin, command))
            return std::cout << "\nSIGNAL DETECTED\n", false;
    }
    this->contact[index].set_phone_number(command);
    command = "";
    while (command.empty())
    {
        std::cout << "\nDarkest secret:\n>";
        if (!std::getline(std::cin, command))
            return std::cout << "\nSIGNAL DETECTED\n", false;
    }
    this->contact[index].set_darkest_secret(command);
    return true;
}

bool PhoneBook::search(void)
{
    if (this->_nbr_contact <= 0)
        return (std::cout << "\nPhoneBook is empty!\n", true);
    else
    {
        std::cout << std::endl << std::setw(10) << "index" << "|" 
        << std::setw(10) << "first name" << "|" 
        << std::setw(10) << "last name" << "|" 
        << std::setw(10) << "nickname" << std::endl;
        
        for (int i = 0; i < this->_nbr_contact; i++)
        {
            std::cout << std::setw(10) << i + 1 << "|";
            
            std::string first_name = this->contact[i].get_first_name();
            if (first_name.length() > 10)
                first_name = first_name.substr(0, 9) + ".";
            std::cout << std::setw(10) << first_name << "|";
            
            std::string last_name = this->contact[i].get_last_name();
            if (last_name.length() > 10)
                last_name = last_name.substr(0, 9) + ".";
            std::cout << std::setw(10) << last_name << "|";
            
            std::string nick_name = this->contact[i].get_nick_name();
            if (nick_name.length() > 10)
                nick_name = nick_name.substr(0, 9) + ".";
            std::cout << std::setw(10) << nick_name << std::endl;
        }
        if (this->search_contact() == false)
            return (false);
    }
    return (true);
}

bool PhoneBook::search_contact( void )
{
    std::string command;
    int index;

    while (1)
    {
        std::cout << "\nSelect an index :\n>";
        if (!std::getline(std::cin, command))
            return (std::cout << "\nSIGNAL DETECTED\n", false);
        index = std::atoi(command.c_str()); // .c_str() pour convertir command en constant pour utiliser atoi  
        if (index >= 1 && index <= 8)
        {
            if (index > this->_nbr_contact)
                std::cout << "Invalid index! This contact doesn't exist\n";    
            else
            {
                this->display_contact_info(index - 1); // -1 car le tableau Contact part de 0
                return (true);
            }    
        }
        else
            std::cout << "Invalid index!\n";
    }
}

void PhoneBook::display_contact_info(int index)
{
    if (index < 0 || index >= 8) // Vérifier que l'index est dans les limites
        return ;

    std::cout << "\nFirst name: " << this->contact[index].get_first_name() << std::endl;
    std::cout << "Last name: " << this->contact[index].get_last_name() << std::endl;
    std::cout << "Nick name: " << this->contact[index].get_nick_name() << std::endl;
    std::cout << "Phone number: " << this->contact[index].get_phone_number() << std::endl;
    std::cout << "Darkest secret: " << this->contact[index].get_darkest_secret() << std::endl;
}
