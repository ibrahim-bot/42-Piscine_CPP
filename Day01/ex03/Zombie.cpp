/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichougra <ichougra@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 15:42:36 by ichougra          #+#    #+#             */
/*   Updated: 2021/03/19 13:39:57 by ichougra         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void    Zombie::advert()
{
    std::cout << "<" << this->_name << "> Braiiiiiiinnnssss ..." << std::endl;
}

Zombie::Zombie(const std::string &name) :
    _name(name)
{
}

Zombie::~Zombie()
{
}