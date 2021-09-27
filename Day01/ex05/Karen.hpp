/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibrahim <ibrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 18:01:40 by ibrahim           #+#    #+#             */
/*   Updated: 2021/09/23 16:06:27 by ibrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
# define KAREN_HPP

#include <iostream>
#include <string>

class Karen
{
    private:
        void _debug();
        void _info();
        void _warning();
        void _error();
        void    (Karen::*tab[4])( void );

    public:
        Karen(/* args */);
        ~Karen();
        void complain( std::string level);
};

#endif