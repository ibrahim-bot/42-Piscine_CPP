/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichougra <ichougra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 17:29:48 by ichougra          #+#    #+#             */
/*   Updated: 2021/10/05 13:01:44 by ichougra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(/* args */)
{
    this->_type = "Cat";
    std::cout << "Constructor Cat called" << std::endl;
    return ;
}

Cat::~Cat()
{
    std::cout << "Destructor Cat called" << std::endl;
    return ;
}

void Cat::makeSound() const
{
    std::cout << "I'm a Cat !" << std::endl;
    return ;
}

std::string Cat::getType() const
{
    return (this->_type);
}

WrongCat::WrongCat()
{
    std::cout << "Constructor WrongCat called" << std::endl;
    return ;
}

WrongCat::~WrongCat()
{
    std::cout << "Destructor WrongCat called" << std::endl;
    return ;
}

void WrongCat::makeSound() const
{
    std::cout << "I'm a WROOONGCat !" << std::endl;
    return ;
}