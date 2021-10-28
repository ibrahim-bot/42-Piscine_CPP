/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichougra <ichougra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 13:09:28 by ichougra          #+#    #+#             */
/*   Updated: 2021/10/27 15:29:49 by ichougra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name)
{
    this->_name = name;
    this->_Hitpoints = 100;
    this->_Energypoints = 50;
    this->_Attackdamage = 30;
    std:: cout << "<" << ClapTrap::_name << "> constructor DiamondTrap called" << std::endl;
    return ;
}

DiamondTrap::DiamondTrap(DiamondTrap const &copy)
{
     std:: cout << "Copy constructor called" << std::endl;
    *this = copy;
    return ;
}

DiamondTrap::~DiamondTrap()
{
    std:: cout << "<" << ClapTrap::_name << "> Destructor DiamondTrap called" << std::endl;
    return ;
}

void DiamondTrap::attack(std::string const & target)
{
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
    std::cout << "My Name " << this->_name << ", ClapTrap Name " << ClapTrap::_name << std::endl;
    return ;
}

DiamondTrap & DiamondTrap::operator=(DiamondTrap const &rhs)
{
    std::cout << "Assignment operator called" << std::endl;
	this->_name = rhs._name;
    this->_Attackdamage = rhs._Attackdamage;
    this->_Energypoints = rhs._Energypoints;
    this->_Hitpoints = rhs._Hitpoints;
	return *this;
}