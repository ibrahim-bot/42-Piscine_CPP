/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichougra <ichougra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 16:16:12 by ichougra          #+#    #+#             */
/*   Updated: 2021/10/04 12:45:54 by ichougra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    this->_name = name;
    this->_Hitpoints = 100;
    this->_Energypoints = 50;
    this->_Attackdamage = 20;
    std::cout << "<" << this->_name << "> constructor ScavTrap called" << std::endl;
    return ;
}

ScavTrap::~ScavTrap()
{
    std::cout << "<" << this->_name << "> Destructor ScavTrap called" << std::endl;
    return ;
}

void    ScavTrap::guardGate()
{
    std::cout << "ScavTrap have enterredin Gate keeper mode." << std::endl;
    return ;
}