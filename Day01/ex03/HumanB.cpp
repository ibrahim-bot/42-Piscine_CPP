/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibrahim <ibrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 15:36:37 by ibrahim           #+#    #+#             */
/*   Updated: 2021/09/22 16:23:37 by ibrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    this->_name = name;
    return ;
}

HumanB::~HumanB()
{
    return ;
}

void HumanB::attack()
{
    std::cout << this->_name << " attacks with his " << this->_arm->getType() << std::endl;
    return ;
}

void HumanB::setWeapon(Weapon& arm)
{
    this->_arm = &arm;
    return ;
}
