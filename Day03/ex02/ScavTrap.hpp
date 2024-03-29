/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichougra <ichougra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 16:16:39 by ichougra          #+#    #+#             */
/*   Updated: 2021/10/27 14:09:48 by ichougra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAPP_HPP
# define SCAVTRAPP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    private:
        /* data */

    public:
        ScavTrap( void ) {return ;};
        ScavTrap(std::string name);
        ScavTrap(ScavTrap const &);
        ~ScavTrap();
        void guardGate();
        void attack( std::string const & target );
        
        ScavTrap & operator=(ScavTrap const &rhs);
};


#endif