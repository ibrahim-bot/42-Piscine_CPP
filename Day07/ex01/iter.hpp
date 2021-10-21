/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichougra <ichougra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 12:43:50 by ichougra          #+#    #+#             */
/*   Updated: 2021/10/21 18:40:09 by ichougra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template<typename Ar>
void iter(Ar *array, int length, void (*f)(Ar const &))
{
    for (int i = 0; i < length; i++)
        (*f)(array[i]);
}

#endif