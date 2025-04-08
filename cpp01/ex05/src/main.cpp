#include "../includes/Harl.class.hpp"

int main()
{
    Harl Classico; 
    Classico.complain("DEBUG");
    Classico.complain("INFO");
    Classico.complain("WARNING");
    Classico.complain("ERROR");
}

// int main(int argc, char **argv)
// {
//     if (argc == 2) 
//     {
//         Harl Classico; 
//         Classico.complain( argv[1] );
//     }
//     return (0);
// }
