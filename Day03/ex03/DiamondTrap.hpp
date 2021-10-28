/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichougra <ichougra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 13:09:52 by ichougra          #+#    #+#             */
/*   Updated: 2021/10/27 15:23:04 by ichougra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
    private:
        std::string _name;

    public:
        DiamondTrap( void ) {return ;};
        DiamondTrap( std::string name );
        DiamondTrap(DiamondTrap const &);
        ~DiamondTrap();
        void attack( std::string const & target );
        void whoAmI();

        DiamondTrap & operator=(DiamondTrap const &);
};

#endif