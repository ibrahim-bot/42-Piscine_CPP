/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CureClass.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichougra <ichougra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 17:12:47 by ichougra          #+#    #+#             */
/*   Updated: 2021/10/28 17:12:47 by ichougra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURECLASS_HPP
#define CURECLASS_HPP

#include "AMateriaClass.hpp"

class Cure: public AMateria
{
	public:
		Cure();
		Cure(std::string type);
		Cure(Cure const &copy);
		~Cure();

		Cure		&operator=(Cure const &rhs);
		AMateria	*clone(void)const;
		void		use(ICharacter &target);
};

#endif