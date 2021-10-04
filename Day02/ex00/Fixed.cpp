/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichougra <ichougra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 13:44:53 by ibrahim           #+#    #+#             */
/*   Updated: 2021/09/29 11:26:04 by ichougra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void )
{
    this->_fixe = 0;
    std:: cout << "Default constructor called" << std::endl;
    return ;
}

Fixed::Fixed( Fixed const &copy )
{
    std:: cout << "Copy constructor called" << std::endl;
    *this = copy;
    return ;
}

Fixed::~Fixed()
{
    std:: cout << "Destructor called" << std::endl;
    return ;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
    return (this->_fixe);
}

void Fixed::setRawBits( int const raw )
{
    this->_fixe = raw;
    return ;
}

Fixed & Fixed::operator=(Fixed const &rhs)
{
	std::cout << "Assignment operator called" << std::endl;
	this->_fixe = rhs.getRawBits();
	return *this;
}
