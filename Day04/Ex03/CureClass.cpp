/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CureClass.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichougra <ichougra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 17:12:19 by ichougra          #+#    #+#             */
/*   Updated: 2021/10/28 17:12:32 by ichougra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "CureClass.hpp"

Cure::Cure(void)
{
	this->_type = "cure";
	return;
}

Cure::Cure(std::string type)
{
	this->_type = type;
	this->_type = "cure";
	return;
}

Cure::Cure(Cure const &copy)
{
	*this = copy;
}

Cure::~Cure()
{
	return;
}

Cure &Cure::operator=(Cure const &rhs)
{
	this->_type = rhs._type;
	return *this;
}

AMateria	*Cure::clone(void)const
{
	AMateria *clone = new Cure(this->_type);
	return clone;
}

void	Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}