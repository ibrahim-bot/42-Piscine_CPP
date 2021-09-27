/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibrahim <ibrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 15:33:02 by ibrahim           #+#    #+#             */
/*   Updated: 2021/09/22 16:24:50 by ibrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int main()
{
    Weapon club = Weapon("crude spiked club");
    HumanA bob("Bob", club);
    
    bob.attack();
    club.setType("some other type of club");
    bob.attack();

    club = Weapon("crude spiked club");
    HumanB jim("Jim");

    jim.setWeapon(club);
    jim.attack();

    club.setType("some other type of club");
    jim.attack();
    
    return (0);
}