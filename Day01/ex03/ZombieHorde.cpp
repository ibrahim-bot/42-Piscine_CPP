/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichougra <ichougra@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 13:10:21 by ichougra          #+#    #+#             */
/*   Updated: 2021/03/19 13:56:45 by ichougra         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

void    ZombieHorde::advert()
{
    
}

ZombieHorde::ZombieHorde(int n)
{
    Zombie *TroupZombie[n];
    int i = 0;
    srand(time(NULL));
    std::string tab[] = {"Ouioui", "Trotro", "Nemo", "Casper",
                        "Shrek", "Lucky Luck", "Boubou", "Coquillage",
                        "Champagne", "Pistache", "Cloclo", "Scooter",
                        "Nuage", "Zouk", "Tam-Tam", "Cumin"};
    while (i != n)
    {
        int random = std::rand() % 16;
        TroupZombie[i] = new Zombie(tab[random]);
        i++;
    }
}

ZombieHorde::~ZombieHorde()
{
    delete [] ;
}
