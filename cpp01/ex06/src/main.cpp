/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febouana <febouana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 19:07:31 by febouana          #+#    #+#             */
/*   Updated: 2025/04/09 19:07:32 by febouana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
