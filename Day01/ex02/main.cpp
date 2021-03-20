/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichougra <ichougra@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 15:33:24 by ichougra          #+#    #+#             */
/*   Updated: 2021/03/19 13:04:53 by ichougra         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

int main()
{
    Zombie  *zombie;
    Zombie  *Vzombie;
    ZombieEvent Zombie;

    Zombie.setZombieType("Gros");
    Vzombie = Zombie.newZombie("ichougra");

    zombie = Zombie.randomChump();

    delete Vzombie;
    delete zombie;
    return (0);
}