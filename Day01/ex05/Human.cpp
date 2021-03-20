/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichougra <ichougra@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 10:57:30 by ichougra          #+#    #+#             */
/*   Updated: 2021/03/19 16:14:29 by ichougra         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Brain Human::getBrain()
{
    return (this->_brain);
}

std::string Human::identify()
{
    return (this->_brain.identify());
}

Human::Human()
{
}

Human::~Human()
{
}