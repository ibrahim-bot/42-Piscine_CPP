/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichougra <ichougra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 14:54:21 by ichougra          #+#    #+#             */
/*   Updated: 2021/10/04 13:04:37 by ichougra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    ClapTrap clap("POIRE");

    clap.attack("JIJI");
    clap.takeDamage(15);
    clap.beRepaired(30);
    clap.attack("JIJI");
    std::cout << std::endl;
    
    ScavTrap Scav("POMME");

    Scav.attack("BANANE");
    Scav.takeDamage(50);
   // clap.attack("WIII");
    Scav.beRepaired(150);
    Scav.attack("ANANAS");
    Scav.guardGate();
    std::cout << std::endl;
    
    FragTrap trap("RAISIN");
    trap.attack("COCO");
    trap.beRepaired(600);
    trap.takeDamage(4000);
    trap.attack("KIWI");
    trap.highFivesGuys();
    std::cout << std::endl;
    
    return (0);
}