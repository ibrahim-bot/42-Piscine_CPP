/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichougra <ichougra@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 15:42:23 by ichougra          #+#    #+#             */
/*   Updated: 2021/03/19 12:51:44 by ichougra         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP 

# include <iostream>
# include "Zombie.hpp"
# include <stdio.h>
# include <stdlib.h>

class ZombieEvent
{
    private:
        std::string _type;
        
    public:
        ZombieEvent();
        ~ZombieEvent();
        void    setZombieType(std::string type);
        Zombie* newZombie(std::string name);
        Zombie* randomChump();
};

#endif
