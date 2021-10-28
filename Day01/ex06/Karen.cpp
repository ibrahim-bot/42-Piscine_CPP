/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichougra <ichougra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 18:01:43 by ibrahim           #+#    #+#             */
/*   Updated: 2021/10/26 12:49:38 by ichougra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen(/* args */)
{
    return ;
}

Karen::~Karen()
{
    return ;
}

void Karen::_debug(void)
{
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void Karen::_info(void)
{
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void Karen::_warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
}

void Karen::_error(void)
{

	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

int nb_lvl(std::string level)
{
    if (level == "DEBUG")
        return (1);
    if (level == "INFO")
        return (2);
    if (level == "WARNING")
        return (3);
    if (level == "ERROR")
        return (4);
    return (0);   
}

void Karen::karenFilter( std::string level )
{
    int nb = nb_lvl(level);

    switch (nb)
    {
    case 1:
        this->_debug();
    case 2:
        this->_info();
    case 3:
        this->_warning();
    case 4:
        this->_error();
    default:
        break;
    }        
}