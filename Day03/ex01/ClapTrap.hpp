/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichougra <ichougra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 14:54:49 by ichougra          #+#    #+#             */
/*   Updated: 2021/10/27 13:13:38 by ichougra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
    protected:
        std::string _name;
        int _Hitpoints;
        int _Energypoints;
        int _Attackdamage;

    public:
        ClapTrap( void ) {return ;};
        ClapTrap(std::string name);
        ClapTrap(ClapTrap const &copy);
        ~ClapTrap();
        void attack(std::string const & target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

        ClapTrap & operator=(ClapTrap const &);
};

#endif