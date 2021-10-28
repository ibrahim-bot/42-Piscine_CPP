/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichougra <ichougra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 14:54:21 by ichougra          #+#    #+#             */
/*   Updated: 2021/10/27 13:24:18 by ichougra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

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
    Scav.beRepaired(150);
    Scav.attack("ANANAS");
    Scav.guardGate();
    
    std::cout << std::endl;
    return (0);
}