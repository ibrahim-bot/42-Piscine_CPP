/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibrahim <ibrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 16:06:43 by ibrahim           #+#    #+#             */
/*   Updated: 2021/09/22 16:20:33 by ibrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

#include <iostream>
#include <string>

class Weapon
{
    private:
        std::string _type;

    public:
        Weapon(std::string type);
        ~Weapon();
        void setType( std::string type );
        std::string& getType();
};


#endif