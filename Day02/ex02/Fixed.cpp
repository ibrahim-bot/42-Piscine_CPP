/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibrahim <ibrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 13:44:53 by ibrahim           #+#    #+#             */
/*   Updated: 2021/09/23 15:44:52 by ibrahim          ###   ########.fr       */
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
	std::cout << "getRawBits member function called" << std::endl;
    return (this->_fixe);
}

void Fixed::setRawBits( int const raw )
{
    this->_fixe = raw;
    return ;
}

float	Fixed::toFloat(void) const
{
	return ((float) this->getRawBits() / (float)(1 << this->bit));
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

std::ostream &operator<<(std::ostream &out, Fixed const &rhs)
{
	out << rhs.toFloat();
	return out;
}
