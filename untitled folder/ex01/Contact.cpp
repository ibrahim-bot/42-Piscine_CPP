/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichougra <ichougra@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 14:11:13 by ichougra          #+#    #+#             */
/*   Updated: 2021/03/15 15:42:19 by ichougra         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
    return;
}

Contact::~Contact()
{
    return;
}

void    Contact::addFirstname(std::string str)
{
    this->first_name = str;
    return;
}

void    Contact::addLastname(std::string str)
{
    this->last_name = str;
    return;
}

void    Contact::addNickname(std::string str)
{
    this->nickname = str;
    return;
}

void    Contact::addlogin(std::string str)
{
    this->login = str;
    return;
}

void    Contact::addpostal_add(std::string str)
{
    this->postal_add = str;
    return;
}

void    Contact::addemail(std::string str)
{
    this->email = str;
    return;
}

void    Contact::addphone(std::string str)
{
    this->phone = str;
    return;
}

void    Contact::addbirthday(std::string str)
{
    this->birthday = str;
    return;
}

void    Contact::addmeal(std::string str)
{
    this->meal = str;
    return;
}

void    Contact::addunderwear(std::string str)
{
    this->underwear = str;
    return;
}

void    Contact::addsecret(std::string str)
{
    this->secret = str;
    return;
}
