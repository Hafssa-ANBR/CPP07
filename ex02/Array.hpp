/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanebaro <hanebaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 15:58:37 by hanebaro          #+#    #+#             */
/*   Updated: 2025/08/11 18:21:21 by hanebaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>

template <typename T>
class Array
{
    private:
        unsigned int Asize;
        T* tab;
    public:
        Array()
        {
            Asize = 0;
            tab = new T[0];
        }
        
        Array(unsigned int n)
        {
            Asize = n;
            tab = new T[n];
        }
        
        Array(const Array &cpy)
        {
            *this = cpy;
        }

        Array &operator=(const Array &affect)
        {
            if(this != &affect)
            {
                delete[] tab;
                Asize = affect.Asize;
                tab = new T[Asize];
                for(unsigned int i = 0; i < Asize; i++)
                    tab = affect.tab[i];
            }
            return (*this);
        }

        ~Array()
        {
            delete[] tab;
        }

        void size()
        {
            return (Asize);
        }
        
        T &operator[](unsigned int i)
        {
            if (i >= Asize || i < 0)
                throw std::out_of_range("Index out of range");
            return (tab[i]);
        }
};