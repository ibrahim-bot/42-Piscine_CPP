/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichougra <ichougra@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 15:42:20 by ichougra          #+#    #+#             */
/*   Updated: 2021/03/19 13:05:04 by ichougra         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

void    ZombieEvent::setZombieType(std::string type)
{
    _type = type;
}

Zombie* ZombieEvent::newZombie(std::string name)
{
    return new Zombie(_type, name);
}

Zombie* ZombieEvent::randomChump()
{
    srand(time(NULL));
    std::string tab[] = {"Ouioui", "Trotro", "Nemo", "Casper", "Shrek", "Lucky Luck"};
    int random = std::rand() % 6;
    return new Zombie(_type, tab[random]);
}

ZombieEvent::ZombieEvent()
{
}

ZombieEvent::~ZombieEvent()
{
}
