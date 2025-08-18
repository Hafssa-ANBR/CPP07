/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanebaro <hanebaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 17:27:08 by hanebaro          #+#    #+#             */
/*   Updated: 2025/08/18 12:47:39 by hanebaro         ###   ########.fr       */
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

// #include <iostream>
// #include "Array.hpp"

// #define MAX_VAL 750
// int main(int, char**)
// {
//     Array<int> numbers(MAX_VAL);
//     int* mirror = new int[MAX_VAL];
//     srand(time(NULL));
//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         const int value = rand();
//         numbers[i] = value;
//         mirror[i] = value;
//     }
//     //SCOPE
//     {
//         Array<int> tmp = numbers;
//         Array<int> test(tmp);
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         if (mirror[i] != numbers[i])
//         {
//             std::cerr << "didn't save the same value!!" << std::endl;
//             return 1;
//         }
//     }
//     try
//     {
//         numbers[-2] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
//     try
//     {
//         numbers[MAX_VAL] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         numbers[i] = rand();
//     }
    
//     delete [] mirror;//
//     return 0;
// }