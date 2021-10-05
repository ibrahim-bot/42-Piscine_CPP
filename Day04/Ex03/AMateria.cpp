/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichougra <ichougra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 14:34:17 by ichougra          #+#    #+#             */
/*   Updated: 2021/10/05 15:52:43 by ichougra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
    return ;
}

AMateria::AMateria(std::string const & type)
{
    this->_type = type;
    return ;
}

AMateria::~AMateria()
{
    return ;
}

std::string const & AMateria::getType() const
{
    return (this->_type);
}