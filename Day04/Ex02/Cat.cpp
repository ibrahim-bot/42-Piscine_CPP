/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichougra <ichougra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 17:29:48 by ichougra          #+#    #+#             */
/*   Updated: 2021/10/28 15:09:34 by ichougra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(/* args */)
{
    std::cout << "Constructor Cat called" << std::endl;
    this->_type = "Cat";
    this->ideas = new Brain();
    return ;
}

Cat::Cat(Cat const &copy)
{
    std::cout << "Constructor Cat copy called" << std::endl;
    this->ideas = new Brain();
    *ideas = *(copy.ideas);
}

Cat::~Cat()
{
    delete this->ideas;
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

Cat & Cat::operator=(Cat const &rhs)
{
    this->ideas = new Brain();
    *ideas = *(rhs.ideas);
    return *this;
}