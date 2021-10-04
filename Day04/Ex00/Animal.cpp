/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichougra <ichougra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 17:23:19 by ichougra          #+#    #+#             */
/*   Updated: 2021/10/04 18:20:20 by ichougra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Constructor Animal called" << std::endl;
    return ;
}

Animal::Animal(std::string type)
{
    this->_type = type;
    std::cout << "Constructor Animal called" << std::endl;
    return ;
}

Animal::~Animal()
{
    std::cout << "Destructor Claptrap called" << std::endl;
    return ;
}