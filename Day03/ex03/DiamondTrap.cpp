/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichougra <ichougra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 13:09:28 by ichougra          #+#    #+#             */
/*   Updated: 2021/10/04 14:55:27 by ichougra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), FragTrap(name + "_clap_name"), ScavTrap(name + "_clap_name")
{
    this->_name = name;
    this->_Hitpoints = 100;
    this->_Energypoints = 50;
    this->_Attackdamage = 30;
    std:: cout << "<" << ClapTrap::_name << "> constructor DiamondTrap called" << std::endl;
    return ;
}

DiamondTrap::~DiamondTrap()
{
    std:: cout << "<" << ClapTrap::_name << "> Destructor DiamondTrap called" << std::endl;
    return ;
}

void DiamondTrap::whoAmI()
{
    std::cout << "My Name " << this->_name << ", ClapTrap Name " << ClapTrap::_name << std::endl;
    return ;
}