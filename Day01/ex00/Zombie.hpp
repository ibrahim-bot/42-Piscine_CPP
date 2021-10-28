/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichougra <ichougra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 18:00:33 by ibrahim           #+#    #+#             */
/*   Updated: 2021/10/26 12:02:43 by ichougra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>
# include <string>

class Zombie
{
    private:
            std::string _name;

    public:
        Zombie();
        Zombie(std::string name);
        ~Zombie();
        void announce(void) const;
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif