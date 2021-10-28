/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichougra <ichougra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 18:01:40 by ibrahim           #+#    #+#             */
/*   Updated: 2021/10/26 12:48:59 by ichougra         ###   ########.fr       */
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

    public:
        Karen(/* args */);
        ~Karen();
        void karenFilter( std::string level);
};

int nb_lvl(std::string level);

#endif