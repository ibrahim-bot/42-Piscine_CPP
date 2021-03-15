/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichougra <ichougra@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 12:33:12 by ichougra          #+#    #+#             */
/*   Updated: 2021/03/15 15:06:24 by ichougra         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact	add_contact()
{
	Contact	new_contact;
	std::string buffer;

	std::cout << "enter FirstName: ";
	std::getline(std::cin, buffer);
	new_contact.addFirstname(buffer);
	std::cout << new_contact.first_name << std::endl;
	return (new_contact);
}

int		main ()
{
	std::string name;
	Contact     phonebook[9];
	int         max_contact = 0;

	while (1)
	{
		std::cout << "Que voulez-vous faire ?: ";
		std::getline(std::cin, name);
		if (name.compare("EXIT") == 0 || (name.compare("exit") == 0))
		{
			return (0);
		}
		if (name.compare("ADD") == 0 || (name.compare("add") == 0))
		{
			if (max_contact < 8)
			{
				phonebook[max_contact++] = add_contact();
				std::cout << phonebook[0].first_name << std::endl;
			}
			else
				std::cout << "The contact is full." << std::endl;
		}
		if (name.compare("SEARCH") == 0 || (name.compare("search") == 0))
		{
			std::cout << phonebook[0].first_name << std::endl;
		}
	}
	return (0);
}