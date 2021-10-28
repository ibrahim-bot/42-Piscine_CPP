/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichougra <ichougra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 15:11:12 by ibrahim           #+#    #+#             */
/*   Updated: 2021/10/26 12:02:26 by ichougra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

int main()
{
    Zombie zombie1("ours");
    zombie1.announce();
    
    Zombie *zombie = newZombie("tigre");
    zombie->announce();

    randomChump("koala");
    
    delete zombie;
    return (0);
}