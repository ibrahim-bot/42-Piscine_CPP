/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateriaClass.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichougra <ichougra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 17:10:43 by ichougra          #+#    #+#             */
/*   Updated: 2021/10/28 17:10:59 by ichougra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateriaClass.hpp"

AMateria::AMateria(void): _type("Default")
{
	return;
}

AMateria::AMateria(std::string const &type): _type(type)
{
	return;
}

AMateria::AMateria(AMateria const &copy)
{
	*this = copy;
}

AMateria::~AMateria()
{
	return;
}

AMateria &AMateria::operator=(AMateria const &rhs)
{
	this->_type = rhs._type;
	return *this;
}

std::string const &AMateria::getType() const
{
	return this->_type;
}
