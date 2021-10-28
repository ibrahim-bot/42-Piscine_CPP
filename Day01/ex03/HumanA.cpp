/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichougra <ichougra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 15:35:37 by ibrahim           #+#    #+#             */
/*   Updated: 2021/10/26 12:25:54 by ichougra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& arm): _name(name), _arm(arm)
{
    return ;
}

HumanA::~HumanA()
{
}

void HumanA::attack()
{
    std::cout << this->_name << " attacks with his " << this->_arm.getType() << std::endl;
    return ;
}