/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichougra <ichougra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 14:54:49 by ichougra          #+#    #+#             */
/*   Updated: 2021/10/27 11:31:13 by ichougra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
    private:
        std::string _name;
        int _Hitpoints;
        int _Energypoints;
        int _Attackdamage;

    public:
        ClapTrap( void );
        ClapTrap( std::string name );
        ClapTrap( ClapTrap const & );
        ~ClapTrap();
        void attack(std::string const & target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

        ClapTrap & operator=(ClapTrap const &);
};

#endif