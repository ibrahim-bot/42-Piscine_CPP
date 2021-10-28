/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichougra <ichougra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 14:33:39 by ibrahim           #+#    #+#             */
/*   Updated: 2021/10/26 12:12:06 by ichougra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *zombie = zombieHorde(3, "Jean");

    zombie[0].announce();
    zombie[1].announce();
    zombie[2].announce();
    //zombie[3].announce();
    
    delete [] zombie;
    return (0);
}