#include "harlFilter.hpp"

harlFilter::harlFilter( void )
{
}

harlFilter::~harlFilter( void )
{
}

void harlFilter::debug( void )
{
    std::cout << "[ DEBUG ]\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl << std::endl;
}

void harlFilter::info( void )
{
    std::cout << "[ INFO ]\nI cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl << std::endl;
}

void harlFilter::warning( void )
{
    std::cout << "[ WARNING ]\nI think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl << std::endl;
}

void harlFilter::error( void )
{
    std::cout << "[ ERROR ]\nThis is unacceptable! I want to speak to the manager now." << std::endl << std::endl;
}

void harlFilter::complain( std::string level )
{
    void(harlFilter::*function[])() = { &harlFilter::debug, &harlFilter::info, &harlFilter::warning, &harlFilter::error } ;
    const std::string levels[] = {"DEBUG","INFO","WARNING","ERROR"};

    for (int i = 0; i < 4; i++)
    {
        if (!levels[i].compare(level))
        {
            while (i < 4)
                (this->*function[i++])();
            return ;
        }
    }
    std::cout << "[ Probably complaining about insignificant problems ]" << std::endl << std::endl;
}
