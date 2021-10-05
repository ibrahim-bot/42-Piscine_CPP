/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichougra <ichougra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 15:00:08 by ichougra          #+#    #+#             */
/*   Updated: 2021/10/05 15:52:54 by ichougra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(/* args */)
{
    this->_type = "cure";
    return ;
}

Cure::~Cure()
{
    return ;
}

AMateria* Cure::clone() const
{
    
}
