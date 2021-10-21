/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibrahim <ibrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 03:42:15 by ibrahim           #+#    #+#             */
/*   Updated: 2021/10/21 04:44:22 by ibrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>

template< typename T >
void swap(T & x, T & y)
{
    T tmp = x;
    x = y;
    y = tmp;
}

template <typename T>
T const &min(T const &a, T const &b)
{
    return (b > a ? a : b);
}

template <typename T>
T const &max(T const &a, T const &b)
{
    return (b >= a ? b : a);
}

#endif