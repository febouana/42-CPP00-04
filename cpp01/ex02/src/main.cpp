/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febouana <febouana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 19:05:37 by febouana          #+#    #+#             */
/*   Updated: 2025/04/09 19:05:38 by febouana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
    std::string str = "HI THIS IS BRAIN"; 
    std::string *strPTR = &str;
    std::string &strREF = str;

    std::cout << "The memory adress of str:           " << &str << std::endl;
    std::cout << "The memory adress held by strPTR:   " << strPTR << std::endl;
    std::cout << "The memory adress held by strREF:   " << &strREF << std::endl << std::endl;

    std::cout << "The value of str:                   " << str << std::endl;
    std::cout << "The value pointed to strPTR:        " << *strPTR << std::endl; // besoin de deferencer pour avoir le contenu de l'adresse
    std::cout << "The value pointed to strREF:        " << strREF << std::endl; // pas besoin de deferencer, juste un alias de str
}
