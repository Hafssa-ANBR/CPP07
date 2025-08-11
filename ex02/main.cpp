/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanebaro <hanebaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 17:27:08 by hanebaro          #+#    #+#             */
/*   Updated: 2025/08/11 18:22:45 by hanebaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
    try
    {
        std::cout << "for int" << std::endl;
        Array <int> tab(2);
        tab[0] = 4;
        tab[1] = 2;
        std::cout << "tab[0] = " << tab[0] << std::endl;
        std::cout << "tab[1] = " << tab[1] << std::endl;
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        std::cout << "for double" << std::endl;
        Array <double> tab(2);
        tab[0] = 4.2;
        tab[1] = 13.37;
        std::cout << "tab[0] = " << tab[0] << std::endl;
        std::cout << "tab[1] = " << tab[1] << std::endl;
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        std::cout << "for string with error" << std::endl;
        Array <std::string> tab(2);
        tab[0] = "4.2";
        tab[1] = "13.37";
        std::cout << "tab[0] = " << tab[0] << std::endl;
        std::cout << "tab[1] = " << tab[10] << std::endl;
        std::cout << "tab[1] = " << tab[1] << std::endl;
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}