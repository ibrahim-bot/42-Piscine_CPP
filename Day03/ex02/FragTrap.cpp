/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichougra <ichougra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 12:46:40 by ichougra          #+#    #+#             */
/*   Updated: 2021/10/04 13:04:48 by ichougra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    this->_name = name;
    this->_Hitpoints = 100;
    this->_Energypoints = 100;
    this->_Attackdamage = 30;
    std::cout << "<" << this->_name << "> constructor FragTrap called" << std::endl;
    return ;
}

FragTrap::~FragTrap()
{
    std::cout << "<" << this->_name << "> Destructor FragTrap called" << std::endl;
    return ;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "positive high fives." << std::endl;
    return ;
}