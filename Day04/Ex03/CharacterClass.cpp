/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CharacterClass.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichougra <ichougra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 17:11:37 by ichougra          #+#    #+#             */
/*   Updated: 2021/10/28 17:11:53 by ichougra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "CharacterClass.hpp"

Character::Character(void): _name("Default")
{
	for (int i = 0; i < 4; i++)
	{
		this->_inventory[i] = 0;
	}
	return;
}

Character::Character(std::string name): _name(name)
{
	for (int i = 0; i < 4; i++)
	{
		this->_inventory[i] = 0;
	}
	return;
}

Character::Character(Character &copy)
{
	*this = copy;
}

Character::~Character(void)
{
	for (int i = 0; (this->_inventory[i]); i++)
		delete this->_inventory[i];
	return;
}

Character &Character::operator=(Character const &rhs)
{
	this->_name = rhs._name;
	for (int i = 0; i < 4; i++)
	{
		this->_inventory[i] = rhs._inventory[i];
	}
	return *this;
}

std::string const &Character::getName() const
{
	return this->_name;
}

void	Character::equip(AMateria *m)
{
	int i;

	i = 0;
	while(i < 4)
	{
		if (this->_inventory[i] == 0)
		{
			this->_inventory[i] = m;
			break;
		}
		i++;
	}
}

void	Character::unequip(int idx)
{
	if (idx >= 0 || idx < 4)
		this->_inventory[idx] = 0;
}

void	Character::use(int idx, ICharacter &target)
{
	if (idx >= 4)
	{
		std::cout << "Can't use" << std::endl;
		return ;
	}
	if ((idx >= 0 || idx < 4) && this->_inventory[idx] != 0)
	{
		if (this->_inventory[idx] != 0)
			this->_inventory[idx]->use(target);
		else
			std::cout << "Can't use" << std::endl;
	}
}