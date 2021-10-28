/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichougra <ichougra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 17:26:49 by ichougra          #+#    #+#             */
/*   Updated: 2021/10/28 15:09:54 by ichougra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(/* args */)
{
    this->_type = "Dog";
    std::cout << "Constructor Dog called" << std::endl;
    this->ideas = new Brain();
    return ;
}

Dog::Dog(Dog const &copy)
{
    std::cout << "Constructor Dog copy called" << std::endl;
    this->ideas = new Brain();
    *ideas = *(copy.ideas);
}

Dog::~Dog()
{
    delete this->ideas;
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
    this->ideas = new Brain();
    *ideas = *(rhs.ideas);
    return *this;
}