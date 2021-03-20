/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichougra <ichougra@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 10:57:33 by ichougra          #+#    #+#             */
/*   Updated: 2021/03/19 14:32:18 by ichougra         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

void    Brain::setAddress()
{
    std::stringstream buff;

    buff << this;
    this->_address = buff.str();
}

std::string Brain::identify()
{
    return (this->_address);
}

Brain::Brain()
{
    setAddress();
}

Brain::~Brain()
{
    
}