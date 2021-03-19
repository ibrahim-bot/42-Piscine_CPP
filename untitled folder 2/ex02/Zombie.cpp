/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichougra <ichougra@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 15:42:36 by ichougra          #+#    #+#             */
/*   Updated: 2021/03/19 12:31:11 by ichougra         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void    Zombie::advert()
{
    std::cout << "<" << this->_name << "(" << this->_type << ")" << "> Braiiiiiiinnnssss ..." << std::endl;
}

Zombie::Zombie(const std::string& type, const std::string &name) :
    _type(type), _name(name)
{
    advert();
}

Zombie::~Zombie()
{
}