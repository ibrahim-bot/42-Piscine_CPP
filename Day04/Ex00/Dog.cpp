/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichougra <ichougra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 17:26:49 by ichougra          #+#    #+#             */
/*   Updated: 2021/10/27 18:09:03 by ichougra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(/* args */)
{
    this->_type = "Dog";
    std::cout << "Constructor Dog called" << std::endl;
    return ;
}

Dog::Dog(Dog const &copy)
{
    std::cout << "Constructor copy called" << std::endl;
    *this = copy;
    return ;
}

Dog::~Dog()
{
    std::cout << "Destructor Dog called" << std::endl;
    return ;
}

void Dog::makeSound() const
{
    std::cout << "I'm a Dog !" << std::endl;
    return ;
}

std::string Dog::getType() const
{
    return (this->_type);
}

Dog & Dog::operator=(Dog const &rhs)
{
    this->_type = rhs._type;
    return *this;
}