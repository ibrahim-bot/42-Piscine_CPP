/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSourceClass.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichougra <ichougra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 17:13:22 by ichougra          #+#    #+#             */
/*   Updated: 2021/10/28 17:18:42 by ichougra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSourceClass.hpp"

MateriaSource::MateriaSource(void)
{
	for (int i = 0; i < 4; i++)
	{
		this->_inv[i] = 0;
	}
	return;
}

MateriaSource::MateriaSource(MateriaSource &copy)
{
	for (int i = 0; i < 4; i++)
	{
		this->_inv[i] = copy._inv[i];
	}
	*this = copy;
}

MateriaSource::~MateriaSource(void)
{
	return;
}

MateriaSource &MateriaSource::operator=(MateriaSource const &rhs)
{
	for (int i = 0; i < 4; i++)
	{
		this->_inv[i] = rhs._inv[i];
	}
	return *this;
}

void	MateriaSource::learnMateria(AMateria* m)
{
	int i;

	i = 0;
	while(i < 4)
	{
		if (this->_inv[i] == 0)
		{
			this->_inv[i] = m->clone();
			delete m;
			break;
		}
		i++;
	}
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inv[i]->getType() == type)
		{
			AMateria *tmp = this->_inv[i];
			return (tmp);
		}
	}
	return (0);
}