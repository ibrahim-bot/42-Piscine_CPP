/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IceClass.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichougra <ichougra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 17:12:53 by ichougra          #+#    #+#             */
/*   Updated: 2021/10/28 17:19:30 by ichougra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IceClass.hpp"

Ice::Ice(void)
{
	this->_type = "ice";
	return;
}

Ice::Ice(std::string type)
{
	this->_type = type;
	this->_type = "ice";
	return;
}

Ice::Ice(Ice const &copy)
{
	*this = copy;
}

Ice::~Ice()
{
	return;
}

Ice &Ice::operator=(Ice const &rhs)
{
	this->_type = rhs._type;
	return *this;
}

AMateria	*Ice::clone(void)const
{
	AMateria *clone = new Ice(this->_type);
	return clone;
}

void	Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << "*" << std::endl;
}