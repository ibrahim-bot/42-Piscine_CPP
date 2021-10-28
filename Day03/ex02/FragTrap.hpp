/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichougra <ichougra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 12:47:03 by ichougra          #+#    #+#             */
/*   Updated: 2021/10/27 14:09:29 by ichougra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    private:
        /* data */

    public:
        FragTrap( void ) {return ;};
        FragTrap(std::string name);
        FragTrap(FragTrap const &);
        ~FragTrap();
        void highFivesGuys(void);
        void attack( std::string const & target );

        FragTrap & operator=(FragTrap const &);
};

#endif