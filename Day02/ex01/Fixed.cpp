/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichougra <ichougra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 13:44:53 by ibrahim           #+#    #+#             */
/*   Updated: 2021/09/29 14:40:55 by ichougra         ###   ########.fr       */
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

Fixed::Fixed(const float flo)
{
    this->_fixe = roundf(flo * (1 << this->bit));
	std::cout << "Float constructor called" << std::endl;
    return ;
}

Fixed::Fixed(const int val)
{
    this->_fixe = val << this->bit;
    std::cout << "fixe = " << (val << this->bit) << std::endl;
	std::cout << "Int constructor called" << std::endl;
    return ;
}

Fixed::~Fixed()
{
    std:: cout << "Destructor called" << std::endl;
    return ;
}

int Fixed::getRawBits(void) const
{
    return (this->_fixe);
}

void Fixed::setRawBits( int const raw )
{
    this->_fixe = raw;
    return ;
}

float	Fixed::toFloat(void) const
{
    std::cout << "\n" << (float)this->getRawBits() << "," << (float)(1 << this->bit) << "\n";
	return ((float)this->getRawBits() / (float)(1 << this->bit));
}

int		Fixed::toInt(void) const
{
	return _fixe >> this->bit;
}

Fixed & Fixed::operator=(Fixed const &rhs)
{
	std::cout << "Assignment operator called" << std::endl;
	this->_fixe = rhs.getRawBits();
	return *this;
}

std::ostream &operator<<(std::ostream &o, Fixed const &rhs)
{
    std::cout << "Assignment operator called" << std::endl;
	o << rhs.toFloat();
	return o;
}
