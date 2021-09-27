/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibrahim <ibrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 14:35:12 by ibrahim           #+#    #+#             */
/*   Updated: 2021/09/21 15:16:40 by ibrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>
#include <string>

class Zombie
{
private:
    std::string _name;
public:
    Zombie(/* args */);
    ~Zombie();
    void announce( void ) const;
    void setname(std::string name);
};

Zombie* zombieHorde( int N, std::string name );

#endif