/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CharacterClass.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichougra <ichougra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 17:12:11 by ichougra          #+#    #+#             */
/*   Updated: 2021/10/28 17:19:52 by ichougra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTERCLASS_HPP
#define CHARACTERCLASS_HPP

#include "ICharacterClass.hpp"
#include "AMateriaClass.hpp"

class Character : public ICharacter
{
	private:
		std::string	_name;
		AMateria	*_inventory[4];

	public:
		Character(void);
		Character(std::string name);
		Character(Character &copy);
		virtual ~Character(void);

		Character	&operator=(Character const &rhs);

		virtual std::string const & getName() const;
		virtual void equip(AMateria* m);
		virtual void unequip(int idx);
		virtual void use(int idx, ICharacter& target);
};

#endif