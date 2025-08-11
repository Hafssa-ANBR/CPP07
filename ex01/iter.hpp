/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanebaro <hanebaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 13:35:23 by hanebaro          #+#    #+#             */
/*   Updated: 2025/08/11 14:07:30 by hanebaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>

template <typename A, typename B>
void iter(A* tab, int len, B funct)
{
    for(int i = 0; i < len; i++)
        funct(tab[i]);
}