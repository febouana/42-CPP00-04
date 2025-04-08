#include "../includes/HarlFilter.class.hpp"

int main(int argc, char **argv)
{
    if (argc == 2) 
    {
        harlFilter Classico; 
        Classico.complain( argv[1] );
    }
    return (0);
}
