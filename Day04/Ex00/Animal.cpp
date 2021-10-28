/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichougra <ichougra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 17:23:19 by ichougra          #+#    #+#             */
/*   Updated: 2021/10/27 16:49:07 by ichougra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Default constructor Animal called" << std::endl;
    return ;
}

Animal::Animal(std::string type)
{
    this->_type = type;
    std::cout << "Constructor Animal called" << std::endl;
    return ;
}

Animal::Animal(Animal const &copy)
{
    std::cout << "Constructor Animal copy called" << std::endl;
    *this = copy;
    return ;
}

Animal::~Animal()
{
    std::cout << "Destructor Animal called" << std::endl;
    return ;
}

void Animal::makeSound() const
{
    std::cout << "I'm a Animal !" << std::endl;
    return ;
}

std::string Animal::getType() const
{
    return (this->_type);
}

WrongAnimal::WrongAnimal()
{
    std::cout << "Constructor WrongAnimal called" << std::endl;
    return ;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "Destructor WrongAnimal called" << std::endl;
    return ;
}

void WrongAnimal::makeSound() const
{
    std::cout << "I'm a WROOONGAnimal !" << std::endl;
    return ;
}

Animal & Animal::operator=(Animal const &rhs)
{
    this->_type = rhs._type;
    return *this;
}