/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichougra <ichougra@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 12:33:12 by ichougra          #+#    #+#             */
/*   Updated: 2021/03/18 12:34:44 by ichougra         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact	add_contact()
{
	Contact	new_contact;
	std::string buffer = "";

	putchar('\n');

	while (buffer.length() == 0)
	{
		std::cout << "enter FirstName      : ";
		std::getline(std::cin, buffer);
	}
	new_contact.addFirstname(buffer);
	buffer = "";
	while (buffer.length() == 0)
	{
		std::cout << "enter LastName       : ";
		std::getline(std::cin, buffer);
	}
	new_contact.addLastname(buffer);
	buffer = "";
	while (buffer.length() == 0)
	{
		std::cout << "enter NickName       : ";
		std::getline(std::cin, buffer);
	}
	new_contact.addNickname(buffer);
	buffer = "";

	while (buffer.length() == 0)
	{
		std::cout << "enter Login          : ";
		std::getline(std::cin, buffer);
	}
	new_contact.addlogin(buffer);
	buffer = "";

	while (buffer.length() == 0)
	{
		std::cout << "enter Postal Address : ";
		std::getline(std::cin, buffer);
	}
	new_contact.addpostal_add(buffer);
	buffer = "";

	while (buffer.length() == 0)
	{
		std::cout << "enter Email Address   : ";
		std::getline(std::cin, buffer);
	}
	new_contact.addemail(buffer);
	buffer = "";

	while (buffer.length() == 0)
	{
		std::cout << "enter Phone Number   : ";
		std::getline(std::cin, buffer);
	}
	new_contact.addphone(buffer);
	buffer = "";

	while (buffer.length() == 0)
	{
		std::cout << "enter Birthday date  : ";
		std::getline(std::cin, buffer);
	}
	new_contact.addbirthday(buffer);
	buffer = "";

	while (buffer.length() == 0)
	{
		std::cout << "enter favorite meal  : ";
		std::getline(std::cin, buffer);
	}
	new_contact.addmeal(buffer);
	buffer = "";

	while (buffer.length() == 0)
	{
		std::cout << "enter underwear color: ";
		std::getline(std::cin, buffer);
	}
	new_contact.addunderwear(buffer);
	buffer = "";

	while (buffer.length() == 0)
	{
		std::cout << "enter darkest secret : ";
		std::getline(std::cin, buffer);
	}
	new_contact.addsecret(buffer);
	
	putchar('\n');
	return (new_contact);
}

bool check_number(std::string str)
{
	for (int i = 0; i < (int)str.length(); i++)
	if (isdigit(str[i]) == false)
		return false;
	return true;
}

void	Contact::print_contact(Contact phonebook[], int max)
{
	std::string buffer;

	std::cout << "Choice your contact with the index: ";
	std::getline(std::cin, buffer);
	while (check_number(buffer) == 0)
	{
		std::cout << "Choice your contact with the index: ";
		std::getline(std::cin, buffer);
	}
	if (std::stoi(buffer) == 0 || std::stoi(buffer) - 1 >= max)
		return ;
	putchar('\n');
	std::cout << "FirstName      : " << phonebook[std::stoi(buffer) - 1].first_name << std::endl;
	std::cout << "LastName       : " << phonebook[std::stoi(buffer) - 1].last_name << std::endl;
	std::cout << "NickName       : " << phonebook[std::stoi(buffer) - 1].nickname << std::endl;
	std::cout << "Login          : " << phonebook[std::stoi(buffer) - 1].login << std::endl;
	std::cout << "Postal address : " << phonebook[std::stoi(buffer) - 1].postal_add << std::endl;
	std::cout << "Email address  : " << phonebook[std::stoi(buffer) - 1].email << std::endl;
	std::cout << "Phone Number   : " << phonebook[std::stoi(buffer) - 1].phone << std::endl;
	std::cout << "Birthday date  : " << phonebook[std::stoi(buffer) - 1].birthday << std::endl;
	std::cout << "Favorite meal  : " << phonebook[std::stoi(buffer) - 1].meal << std::endl;
	std::cout << "Underwear color: " << phonebook[std::stoi(buffer) - 1].underwear << std::endl;
	std::cout << "Darknest secret: " << phonebook[std::stoi(buffer) - 1].secret << std::endl;
	putchar('\n');
}

void	Contact::search(Contact phonebook[], int max)
{
	std::cout << "\n";
	std::cout << "     index|first Name| Last Name|  nickname" << std::endl;
	for (int i = 0; i < max; i++)
	{
		std::cout << "         " << i + 1;
		std::cout << "|";
		for (int j = phonebook[i].first_name.length(); j < 10; j++)
			std::cout << " ";
		if (phonebook[i].first_name.length() >= 10)
		{
			for (int j = 0; j < 9; j++)
				putchar(phonebook[i].first_name[j]);
			putchar('.');
		}
		else
			std::cout << phonebook[i].first_name;
		std::cout << "|";	
		for (int j = phonebook[i].last_name.length(); j < 10; j++)
			std::cout << " ";
		if (phonebook[i].last_name.length() >= 10)
		{
			for (int j = 0; j < 9; j++)
				putchar(phonebook[i].last_name[j]);
			putchar('.');
		}		
		else 
			std::cout << phonebook[i].last_name;
		std::cout << "|";
		
		for (int j = phonebook[i].nickname.length(); j < 10; j++)
			std::cout << " ";
		if (phonebook[i].nickname.length() >= 10)
		{
			for (int j = 0; j < 9; j++)
				putchar(phonebook[i].nickname[j]);
			putchar('.');
		}
		else
			std::cout << phonebook[i].nickname;
		putchar('\n');
	}
	print_contact(phonebook, max);
}

int		main ()
{
	std::string name;
	Contact     phonebook[9];
	int         max_contact = 0;

	std::cout << "---------------MENU--------------" << std::endl;
	std::cout << "Use -> [ADD] or [SEARCH] or [EXIT]" << std::endl;
	while (1)
	{
		std::cout << "Command : ";
		std::getline(std::cin, name);
		if (name.compare("EXIT") == 0 || (name.compare("exit") == 0))
		{
			return (0);
		}
		if (name.compare("ADD") == 0 || (name.compare("add") == 0))
		{
			if (max_contact < 8)
				phonebook[max_contact++] = add_contact();
			else
				std::cout << "The contact is full." << std::endl;
		}
		if (name.compare("SEARCH") == 0 || (name.compare("search") == 0))
		{
			if (max_contact < 1)
				std::cout << "ADD contact" << std::endl;
			else
				phonebook->search(phonebook, max_contact);
		}
	}
	return (0);
}