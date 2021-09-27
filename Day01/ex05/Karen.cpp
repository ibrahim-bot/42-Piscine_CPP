/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibrahim <ibrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 18:01:43 by ibrahim           #+#    #+#             */
/*   Updated: 2021/09/23 16:07:16 by ibrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen(/* args */)
{
    this->tab[0] = &Karen::_debug;
	this->tab[1] = &Karen::_info;
	this->tab[2] = &Karen::_warning;
	this->tab[3] = &Karen::_error;
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

void Karen::complain( std::string level )
{
    int i = -1;
    std::string	type[4] = { "DEBUG", "INFO", "WARNING", "ERROR" };
    
    while (++i < 4)
        if (type[i] == level)
            (this->*tab[i])();
            
}