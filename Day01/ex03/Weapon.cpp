/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichougra <ichougra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 15:35:21 by ibrahim           #+#    #+#             */
/*   Updated: 2021/10/26 12:30:35 by ichougra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( std::string type)
{
    this->_type = type;
    return;
}

Weapon::~Weapon()
{
    return;
}

void    Weapon::setType( std::string type )
{
    this->_type = type;
    return;
}

std::string const & Weapon::getType()
{
    return (this->_type); 
}
