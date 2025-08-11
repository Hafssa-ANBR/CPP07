/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanebaro <hanebaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 12:44:40 by hanebaro          #+#    #+#             */
/*   Updated: 2025/08/11 13:02:53 by hanebaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>

template <typename A>
void swap(A &var1, A &var2)
{
    A x;
    x = var1;
    var1 = var2;
    var2 = x;
}

template <typename A>
A min(A var1, A var2)
{
    if (var1 < var2)
        return (var1);
    else
        return (var2);
}

template <typename A>
A max(A var1, A var2)
{
    if (var1 > var2)
        return (var1);
    else
        return (var2);
}
