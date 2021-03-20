/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichougra <ichougra@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 15:26:31 by ichougra          #+#    #+#             */
/*   Updated: 2021/03/18 15:30:34 by ichougra         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>


void    memoryLeak()
{
    std::string* panthere = new std::string("string panthere");

    std::cout << *panthere << std::endl;
    delete panthere;
}

int main()
{
    memoryLeak();
    return (0);
}