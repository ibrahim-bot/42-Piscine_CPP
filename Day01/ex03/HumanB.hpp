/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibrahim <ibrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 15:19:03 by ibrahim           #+#    #+#             */
/*   Updated: 2021/09/22 16:20:40 by ibrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB
{
    private:
        Weapon* _arm;
        std::string _name;

    public:
        HumanB(std::string);
        ~HumanB();
        void attack();
        void setWeapon(Weapon&);
};

#endif