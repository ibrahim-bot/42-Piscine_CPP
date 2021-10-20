/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichougra <ichougra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 12:39:05 by ichougra          #+#    #+#             */
/*   Updated: 2021/10/20 13:08:14 by ichougra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(/* args */)
{
    return ;
}

Intern::~Intern()
{
    return ;
}

Form* Intern::makeForm(std::string form, std::string target)
{
    std::string	forms[3] = { "robotomy request", "presidential pardon", "shrubbery creation" };
	int i = 0;
	
    while(i < 3)
	{
		if (forms[i] == form)
			break;
		i++;
	}
	switch (i)
	{
		case 0:
			std::cout << "Intern creates " << forms[i] << std::endl;
			return new RobotomyRequestForm(target);
		case 1:
			std::cout << "Intern creates " << forms[i] << std::endl;
			return new PresidentialPardonForm(target);
		case 2:
			std::cout << "Intern creates " << forms[i] << std::endl;
			return new ShrubberyCreationForm(target);
		default:
			std::cout << "Can't create " << forms[i] << std::endl;
	}
	return NULL;
}