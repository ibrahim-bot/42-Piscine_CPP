/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichougra <ichougra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 14:54:21 by ichougra          #+#    #+#             */
/*   Updated: 2021/10/27 15:30:55 by ichougra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{    
    DiamondTrap diamond("CITRON");

    diamond.attack("TOMATE");
    diamond.takeDamage(500);
    diamond.beRepaired(300);
    diamond.attack("TOMATE");
    
    std::cout << std::endl;
    diamond.guardGate();
    diamond.highFivesGuys();
    diamond.whoAmI();
    std::cout << std::endl;
    
    return (0);
} 