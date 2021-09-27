/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibrahim <ibrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 16:44:06 by ibrahim           #+#    #+#             */
/*   Updated: 2021/09/20 16:12:05 by ibrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie()
{
    return ;
}

Zombie::Zombie(std::string name)
{
    this->_name = name;
    return ;
}

Zombie::~Zombie()
{
    std::cout << "<" << this->_name << "> is destroyed" << std::endl;
    return ;
}

void Zombie::announce( void ) const
{
    std::cout << "<" << this->_name << "> BraiiiiiiinnnzzzZ..." << std::endl;
}

