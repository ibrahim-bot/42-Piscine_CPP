/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichougra <ichougra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 15:03:51 by ichougra          #+#    #+#             */
/*   Updated: 2021/10/22 16:13:10 by ichougra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
    std::list<int> lst;

    lst.push_back(0);
    lst.push_back(10);
    lst.push_back(68);
    lst.push_back(0);
    
    std::cout << "\n--------List------ " << std::endl;
    easyfind(lst, 0);
    easyfind(lst, 50);

    std::vector<int> vec(5, 12);
    
    std::cout << "\n--------Vector------ " << std::endl;
    easyfind(vec, 80);
    easyfind(vec, 12);
    return (0);
}