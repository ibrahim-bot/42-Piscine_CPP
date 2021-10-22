/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichougra <ichougra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 15:12:12 by ichougra          #+#    #+#             */
/*   Updated: 2021/10/22 15:50:10 by ichougra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <list>
#include <vector>

template<typename T>
int easyfind(T type, int i)
{
    typename T::const_iterator  it;
    typename T::const_iterator  ite = type.end();
    int val = 0;

    for(it = type.begin(); it != ite; ++it)
    {
        if (*it == i)
        {
            std::cout << "Occurrence found" << std::endl;
            return (0);
        }
    }
    std::cout << "Occurrence not found" << std::endl;
    return (-1);
}

#endif