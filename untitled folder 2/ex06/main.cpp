/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichougra <ichougra@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 16:17:42 by ichougra          #+#    #+#             */
/*   Updated: 2021/03/19 16:23:14 by ichougra         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int main()
{
    {
        Weapon club = Weapon("crude spiked club");
        
        HumanA bob("Bob", club);
        bob.attack();
        club.setType("some other type of club");
        bob.attack();
    }
    {
         Weapon club = Weapon("crude spiked club");

         HumanB jim("Jim");
         jim.setWeapon(club);
         jim.attack();
         club.setType("some other type of club");
         jim.attack();
    }
    
}