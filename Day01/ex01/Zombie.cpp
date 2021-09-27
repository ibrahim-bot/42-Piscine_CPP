/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibrahim <ibrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 14:35:57 by ibrahim           #+#    #+#             */
/*   Updated: 2021/09/21 15:16:49 by ibrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(/* args */)
{
    return;
}

Zombie::~Zombie()
{
    std::cout << "<" << this->_name << "> is destroyed" << std::endl;
    return;
}

void    Zombie::setname(std::string name)
{
    this->_name = name;
    return;
}

void    Zombie::announce(void) const
{
    std::cout << "<" << this->_name << "> BraiiiiiiinnnzzzZ..." << std::endl;
    return;
}
