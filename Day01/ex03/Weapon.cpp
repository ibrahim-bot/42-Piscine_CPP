/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibrahim <ibrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 15:35:21 by ibrahim           #+#    #+#             */
/*   Updated: 2021/09/22 16:16:48 by ibrahim          ###   ########.fr       */
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

std::string& Weapon::getType()
{
    return (this->_type); 
}
