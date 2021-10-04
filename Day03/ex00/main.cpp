/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichougra <ichougra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 14:54:21 by ichougra          #+#    #+#             */
/*   Updated: 2021/09/29 15:30:08 by ichougra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap trap("POIRE");

    trap.attack("JIJI");
    trap.takeDamage(15);
    trap.beRepaired(30);
    trap.attack("JIJI");
    return (0);
}