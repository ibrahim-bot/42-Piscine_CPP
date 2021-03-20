/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichougra <ichougra@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 11:50:46 by ichougra          #+#    #+#             */
/*   Updated: 2021/03/19 10:45:20 by ichougra         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void    Pony::ponyOnTheStack(std::string name, std::string color, std::string age)
{
    Pony eclair;

    eclair._name = name;
    eclair._color = color;
    eclair._age = age;
    
    std::cout << std::endl;
    std::cout << eclair._name << " run for life" << std::endl;
    std::cout << "but his age " << eclair._age << std::endl;
    std::cout << "his color : " << eclair._color << std::endl;
    std::cout << std::endl;
}

void    Pony::ponyOnTheHeap(std::string name, std::string color, std::string age)
{
    Pony    *poney = new Pony();

    poney->_name = name;
    poney->_color = color;
    poney->_age = age;
    
    std::cout << std::endl;
    std::cout << poney->_name << " run for life" << std::endl;
    std::cout << "but his age " << poney->_age << std::endl;
    std::cout << "his color : " << poney->_color << std::endl;
    std::cout << std::endl;
    
    delete poney;
}

Pony::Pony()
{
    std::cout << "Pony " << " is Born" << std::endl;
}

Pony::~Pony()
{
    std::cout << "Pony "<< this->_name << " is Died" << std::endl;
}