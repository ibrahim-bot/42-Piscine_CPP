/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichougra <ichougra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 14:55:49 by ichougra          #+#    #+#             */
/*   Updated: 2021/10/04 12:40:00 by ichougra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
    this->_name = name;
    this->_Attackdamage = 0;
    this->_Energypoints = 10;
    this->_Hitpoints = 10;
    std:: cout << "<" << this->_name << "> constructor ClapTrap called" << std::endl;
    return ;
}

ClapTrap::~ClapTrap()
{
    std:: cout << "<" << this->_name << "> Destructor Claptrap called" << std::endl;
    return ;
}

void ClapTrap::attack(std::string const & target)
{
    std::cout << "<" << this->_name << "> attack " << target << ", causing " << this->_Attackdamage << " points of damage!" << std::endl;
    return ;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    this->_Attackdamage = amount;
    std::cout << "<" << this->_name << "> attack wins +" << amount << std::endl;
    return ;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    this->_Energypoints = amount;
    std::cout << "<" << this->_name << "> Energy wins +" << amount << std::endl;
    return ;
}